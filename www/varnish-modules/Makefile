PORTNAME=	varnish-modules
PORTVERSION=	0.26.0
CATEGORIES=	www

MAINTAINER=	zi@FreeBSD.org
COMMENT=	Collection of Varnish Cache modules by Varnish Software
WWW=		https://github.com/varnish/varnish-modules

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS=	rst2man:textproc/py-docutils

USES=		autoreconf:build gmake libtool pkgconfig python:build varnish:7
GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
CONFIGURE_ARGS=	--disable-static
INSTALL_TARGET=	install-strip

USE_GITHUB=	yes
GH_ACCOUNT=	varnish
GH_PROJECT=	varnish-modules

MAKE_JOBS_UNSAFE=	yes

OPTIONS_DEFINE=	DOCS
PORTDOCS=	*

CFLAGS+=	-Wno-error=deprecated-declarations

pre-configure:
	cd ${WRKSRC} && ./bootstrap

post-build-DOCS-on:
	cd ${WRKSRC} && ${MAKE_CMD} rst-docs

post-install-DOCS-on:
	cd ${WRKSRC}/docs && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR} '-not -regex .*.man.rst'

.include <bsd.port.mk>
