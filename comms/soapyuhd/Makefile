PORTNAME=	SoapyUHD
DISTVERSIONPREFIX=	soapy-uhd-
DISTVERSION=	0.4.1-18
PORTREVISION=	1
DISTVERSIONSUFFIX=	-g6b52139
CATEGORIES=	comms hamradio

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Soapy SDR plugin for the Airspy
WWW=		https://github.com/pothosware/SoapyUHD/wiki

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libboost_system.so:devel/boost-libs \
		libSoapySDR.so:misc/soapysdr \
		libuhd.so:comms/uhd

USES=		cmake compiler:c++11-lang
USE_GITHUB=	yes
GH_ACCOUNT=	pothosware

PLIST_FILES=	lib/SoapySDR/modules0.8/libuhdSupport.so \
		lib/uhd/modules/libsoapySupport.so

.include <bsd.port.mk>
