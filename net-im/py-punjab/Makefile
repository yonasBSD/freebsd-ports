PORTNAME=	punjab
PORTVERSION=	0.15
PORTREVISION=	1
CATEGORIES=	net-im python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	HTTP XMPP client interface
WWW=		https://github.com/twonds/punjab

BROKEN=		fails at runtime
DEPRECATED=	Abandoned project, not compatible with decent python/twisted
EXPIRATION_DATE=	2025-04-12

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}twisted>=0:devel/py-twisted@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils
USE_RC_SUBR=	punjab

SUB_FILES=	pkg-message punjab.tac
SUB_LIST=	PYTHON_CMD="${PYTHON_CMD}"

PORTDOCS=	README.txt INSTALL.txt PKG-INFO

OPTIONS_DEFINE=	DOCS

post-install:
	(cd ${WRKDIR} && ${INSTALL_DATA} punjab.tac \
		${STAGEDIR}${PREFIX}/libexec)
	@${MKDIR} ${STAGEDIR}${WWWDIR}
	@(cd ${WRKSRC}/html && ${COPYTREE_SHARE} . \
		${STAGEDIR}${WWWDIR})

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} \
		${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
