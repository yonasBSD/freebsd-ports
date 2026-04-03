PORTNAME=	shodan
DISTVERSION=	1.31.0
CATEGORIES=	security python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Python library and command-line utility for Shodan
WWW=		https://github.com/achillean/shodan-python

LICENSE=	MIT

BUILD_DEPENDS=	${PY_SETUPTOOLS} \
		${PYTHON_PKGNAMEPREFIX}wheel>0:devel/py-wheel@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}XlsxWriter>0:textproc/py-xlsxwriter@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}click-plugins>0:devel/py-click-plugins@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}click>0:devel/py-click@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}colorama>0:devel/py-colorama@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>=2.2.1:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}tldextract>0:dns/py-tldextract@${PY_FLAVOR}

USES=		python
USE_PYTHON=	pep517 concurrent autoplist

NO_ARCH=	yes

.include <bsd.port.mk>
