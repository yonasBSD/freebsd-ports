PORTNAME=	geopandas
PORTVERSION=	0.14.4
PORTREVISION=	2
CATEGORIES=	graphics python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lbartoletti@FreeBSD.org
COMMENT=	Python tools for geographic data
WWW=		https://pypi.org/project/geopandas/

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pandas>0:math/py-pandas@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}shapely>=1.2.18:devel/py-shapely@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}fiona>=1.0.1:graphics/py-fiona@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyproj>=1.9.3:graphics/py-pyproj@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>=1.3.0:devel/py-six@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist cython distutils

NO_ARCH=	yes

.include <bsd.port.mk>
