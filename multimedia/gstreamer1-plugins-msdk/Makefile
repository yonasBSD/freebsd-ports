PORTREVISION=	0
CATEGORIES=	multimedia

COMMENT=	GStreamer (Intel MediaSDK) plugin

LIB_DEPENDS=	libdrm.so:graphics/libdrm \
		libgudev-1.0.so:devel/libgudev \
		libmfx.so:multimedia/intel-media-sdk \
		libva-drm.so:multimedia/libva

MESON_ARGS+=	-Dskip_gstva=false

MASTERDIR=	${.CURDIR:H:H}/multimedia/gstreamer1-plugins

PLIST=		${.CURDIR}/pkg-plist

DIST=		bad
GST_PLUGIN=	msdk

BAD_GST_ENABLED_PLUGINS=	va

.include "${MASTERDIR}/Makefile"
