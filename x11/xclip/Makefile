PORTNAME=	xclip
DISTVERSION=	0.13-99
DISTVERSIONSUFFIX=	-g2c3b811
CATEGORIES=	x11

MAINTAINER=	eduardo@FreeBSD.org
COMMENT=	Interface to X selections ("the clipboard") from the command line
WWW=		https://github.com/astrand/xclip

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		autoreconf gmake iconv xorg
USE_GITHUB=	yes
GH_ACCOUNT=	astrand
USE_XORG=	x11 xmu

GNU_CONFIGURE=	yes
CONFIGURE_ENV+=	ac_cv_header_X11_Intrinsic_h=yes \
		ac_cv_header_X11_Xmu_Atoms_h=yes \
		ac_cv_lib_Xmu_XmuClientWindow=yes

PLIST_FILES=	bin/xclip \
		bin/xclip-copyfile \
		bin/xclip-cutfile \
		bin/xclip-pastefile \
		share/man/man1/xclip-copyfile.1.gz \
		share/man/man1/xclip.1.gz

PORTDOCS=	README
OPTIONS_DEFINE=	DOCS

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_MAN} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/xclip

.include <bsd.port.mk>
