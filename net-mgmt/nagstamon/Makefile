PORTNAME=	nagstamon
DISTVERSIONPREFIX=	v
DISTVERSION=	3.16.2
PORTREVISION=	1
CATEGORIES=	net-mgmt python

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Nagios status monitor for your desktop
WWW=		https://nagstamon.ifw-dresden.de/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}importlib-metadata>0:devel/py-importlib-metadata@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}keyring>0:security/py-keyring@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}psutil>=2.0:sysutils/py-psutil@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}arrow>0:devel/py-arrow@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}beautifulsoup>=4.2.1:www/py-beautifulsoup@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}importlib-metadata>0:devel/py-importlib-metadata@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}keyring>0:security/py-keyring@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}psutil>0:sysutils/py-psutil@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}python-dateutil>=0:devel/py-python-dateutil@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests-gssapi>0:www/py-requests-gssapi@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests-kerberos>0:security/py-requests-kerberos@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}simplejson>0:devel/py-simplejson@${PY_FLAVOR}

USES=		cpe pyqt:5 python
CPE_VENDOR=	henri_wahl
USE_GITHUB=	yes
GH_ACCOUNT=	HenriWahl
GH_PROJECT=	Nagstamon
USE_PYQT=	pyqt5:run
USE_PYTHON=	autoplist distutils noflavors

NO_ARCH=	yes

.include <bsd.port.mk>
