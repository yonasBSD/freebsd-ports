PORTNAME=	hgsvn
PORTVERSION=	0.6.0
PORTREVISION=	3
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	delphij@FreeBSD.org
COMMENT=	Scripts to work locally on Subversion checkouts using Mercurial
WWW=		https://pypi.org/project/hgsvn/

LICENSE=	GPLv3

.if ${WITH_SUBVERSION_VER:U} == LTS
RUN_DEPENDS=	svn:devel/subversion-lts
.else
RUN_DEPENDS=	svn:devel/subversion
.endif
RUN_DEPENDS+=	${PY_MERCURIAL} \
		${PYTHON_PKGNAMEPREFIX}hglib>0:devel/py-hglib@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
PLIST_SUB=	VERSION=${PORTVERSION} PYVER=${PYTHON_VERSION:S/python//}

NO_ARCH=	YES

.include <bsd.port.mk>
