PORTNAME=	stegosaurus
DISTVERSION=	0.0.3
CATEGORIES=	audio
PKGNAMESUFFIX=	-lv2

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Drum synth LV2 plugin
WWW=		https://github.com/mxmilkiib/stegosaurus

LICENSE=	GPLv3

BROKEN=		incompatible with Python-3.11, see https://github.com/mxmilkiib/stegosaurus/issues/7

BUILD_DEPENDS=	lv2>0:audio/lv2

USES=		gnome waf localbase:ldflags pkgconfig xorg
USE_GITHUB=	yes
GH_ACCOUNT=	mxmilkiib
GH_TAGNAME=	543a95d
USE_GNOME=	cairo
USE_XORG=	x11

CFLAGS+=	-fcommon # variables controller/write_function/etc, see https://github.com/mxmilkiib/stegosaurus/issues/6

.include <bsd.port.mk>
