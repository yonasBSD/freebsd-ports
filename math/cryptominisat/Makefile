PORTNAME=	cryptominisat
DISTVERSION=	5.11.21
PORTREVISION=	5
CATEGORIES=	math

MAINTAINER=	arrowd@FreeBSD.org
COMMENT=	General-purpose award-winning SAT solver
WWW=		https://github.com/msoos/cryptominisat

LICENSE=	MIT LGPL21
LICENSE_COMB=	multi
LICENSE_FILE_LGPL21=	${WRKSRC}/LICENSE.txt
LICENSE_FILE_MIT=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libm4ri.so:math/m4ri \
		libboost_program_options.so:devel/boost-libs

USES=		cmake compiler:c++11-lib
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	msoos

CMAKE_OFF=	ENABLE_PYTHON_INTERFACE

.include <bsd.port.mk>
