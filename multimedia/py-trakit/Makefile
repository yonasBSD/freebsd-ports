PORTNAME=	trakit
DISTVERSION=	0.2.2
CATEGORIES=	multimedia python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	eduardo@FreeBSD.org
COMMENT=	Guess additional information from track titles
WWW=		https://github.com/ratoaq2/trakit

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PY_SETUPTOOLS} \
		${PYTHON_PKGNAMEPREFIX}poetry-core>0:devel/py-poetry-core@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>0:devel/py-wheel@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}babelfish>=0.6.0:devel/py-babelfish@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}rebulk>=3.1.0:devel/py-rebulk@${PY_FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pyyaml>=6.0:devel/py-pyyaml@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}unidecode>=1.3.6:converters/py-unidecode@${PY_FLAVOR}

USES=		python
USE_GITHUB=	yes
GH_ACCOUNT=	ratoaq2
USE_PYTHON=	autoplist pep517 pytest

TESTING_UNSAFE=	https://github.com/ratoaq2/trakit/issues/127

NO_ARCH=	yes

.include <bsd.port.mk>
