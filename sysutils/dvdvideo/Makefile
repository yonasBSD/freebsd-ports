PORTNAME=	dvdvideo
PORTVERSION=	20130117
PORTREVISION=	3
CATEGORIES=	sysutils multimedia
MASTER_SITES=	http://contribs.martymac.org/FreeBSD-ports/distfiles/ \
		LOCAL/martymac
PKGNAMESUFFIX=	${PYTHON_PKGNAMESUFFIX}
DISTNAME=	python-${PORTNAME}-${PORTVERSION}

MAINTAINER=	martymac@FreeBSD.org
COMMENT=	Video DVD backup tool
WWW=		http://bblank.thinkmo.de/blog/new-software-python-dvdvideo

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

NO_ARCH=	yes
USES=		python tar:tgz
USE_PYTHON=	autoplist distutils

OPTIONS_DEFINE=	DVDCSS
.if !defined(PACKAGE_BUILDING)
OPTIONS_DEFAULT=	DVDCSS
.endif
# DVDCSS version hardcoded in dvdvideo/libdvdcss.py
DVDCSS_LIB_DEPENDS=	libdvdcss.so.2:multimedia/libdvdcss

.include <bsd.port.mk>
