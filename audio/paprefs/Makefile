PORTNAME=	paprefs
PORTVERSION=	1.2
PORTREVISION=	8
CATEGORIES=	audio
MASTER_SITES=	http://freedesktop.org/software/pulseaudio/${PORTNAME}/

MAINTAINER=	romain@FreeBSD.org
COMMENT=	GTK configuration dialog for PulseAudio
WWW=		https://freedesktop.org/software/pulseaudio/paprefs/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libdbus-1.so:devel/dbus \
		libdbus-glib-1.so:devel/dbus-glib \
		libpulse.so:audio/pulseaudio

USES=		compiler:c++11-lang gnome meson pkgconfig tar:xz
USE_GNOME=	atkmm glib20 glibmm gtk30 gtkmm30 libsigc++20

OPTIONS_DEFINE=	PK NLS
OPTIONS_SUB=	yes
PK_DESC=	Force dependency on PackageKit

PK_LIB_DEPENDS=	libpackagekit-glib2.so:ports-mgmt/packagekit

NLS_USES=		gettext

.include <bsd.port.mk>
