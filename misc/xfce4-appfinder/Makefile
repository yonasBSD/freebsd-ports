PORTNAME=	xfce4-appfinder
PORTVERSION=	4.20.0
CATEGORIES=	misc xfce
MASTER_SITES=	XFCE
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Application launcher and finder
WWW=		https://gitlab.xfce.org/xfce/xfce4-appfinder

LICENSE=	GPLv2

USES=		compiler:c11 gettext-tools gmake gnome libtool pkgconfig \
		tar:bzip2 xfce
USE_GNOME=	cairo gdkpixbuf glib20 gtk30
USE_XFCE=	garcon libmenu xfconf

GNU_CONFIGURE=	yes

PORTSCOUT=	limitw:1,even

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
