PORTNAME=	zathura-ps
DISTVERSION=	0.2.8
PORTREVISION=	2
CATEGORIES=	graphics
MASTER_SITES=	https://pwmt.org/projects/zathura-ps/download/

MAINTAINER=	mew14930xvi@inbox.lv
COMMENT=	PostScript support for Zathura PDF viewer
WWW=		https://pwmt.org/projects/zathura-ps/

LICENSE=	ZLIB
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	appstream-util:devel/appstream-glib \
		zathura:graphics/zathura
LIB_DEPENDS=	libgirara-gtk3.so:x11-toolkits/girara \
		libspectre.so:print/libspectre
RUN_DEPENDS=	zathura:graphics/zathura

USES=		compiler:c11 desktop-file-utils gnome meson ninja pkgconfig \
		tar:xz
USE_GNOME=	cairo

PLIST_FILES=	lib/zathura/libps.so \
		share/applications/org.pwmt.zathura-ps.desktop \
		share/metainfo/org.pwmt.zathura-ps.metainfo.xml

.include <bsd.port.mk>
