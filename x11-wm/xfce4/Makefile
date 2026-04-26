PORTNAME=	xfce
PORTVERSION=	4.20
PORTREVISION=	1
CATEGORIES=	x11-wm xfce

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Meta-port for the Xfce Desktop Environment
WWW=		https://www.xfce.org/

RUN_DEPENDS=	xfwm4:x11-wm/xfce4-wm \
		xfce4-session:x11-wm/xfce4-session \
		xfce4-panel:x11-wm/xfce4-panel \
		xfdesktop:x11-wm/xfce4-desktop \
		xfsettingsd:sysutils/xfce4-settings

USES=	metaport

OPTIONS_DEFINE=		APPFINDER CONF DASHBOARD DEVTOOLS GENERICSLIDER \
			GREYBIRD ICONS LIGHTDM MIXER MOUSEPAD NOTIFY PAROLE \
			PANELPROFILES SCREENSAVER TASKMANAGER TERMINAL TUMBLER \
			VOLUMED WMTHEMES XPM

OPTIONS_GROUP=		PLUGINS
OPTIONS_GROUP_PLUGINS=	APPMENUPL BATTERYPL BSDCPUFREQPL CALCULATORPL \
			CLIPMANPL CPUGRAPHPL DATETIMEPL DICTPL DISKPERFPL \
			DOCKLIKEPL EYESPL FSGUARDPL GENMONPL MAILWATCHPL \
			MOUNTPL MPCPL NETLOADPL NOTESPL PLACESPL PULSEAUDIOPL \
			SCREENSHOOTERPL SMARTBOOKMARKPL STOPWATCHPL SYSTEMLOADPL \
			TIMEOUTPL TIMERPL VERVEPL WEATHERPL WHISKERMENUPL \
			WINDOWCKPL XKBPL

OPTIONS_DEFAULT=	APPFINDER CONF DASHBOARD DEVTOOLS GENERICSLIDER \
			GREYBIRD ICONS MIXER MOUSEPAD NOTIFY PAROLE PANELPROFILES \
			SCREENSAVER TASKMANAGER TERMINAL TUMBLER VOLUMED WMTHEMES XPM \
			APPMENUPL BATTERYPL BSDCPUFREQPL CALCULATORPL \
			CLIPMANPL CPUGRAPHPL DATETIMEPL DICTPL DISKPERFPL \
			DOCKLIKEPL EYESPL FSGUARDPL GENMONPL MAILWATCHPL \
			MOUNTPL MPCPL NETLOADPL NOTESPL PLACESPL PULSEAUDIOPL \
			SCREENSHOOTERPL SMARTBOOKMARKPL STOPWATCHPL SYSTEMLOADPL \
			TIMEOUTPL TIMERPL VERVEPL WEATHERPL WHISKERMENUPL \
			WINDOWCKPL XKBPL

APPFINDER_RUN_DEPENDS=		xfce4-appfinder>0:misc/xfce4-appfinder
APPFINDER_DESC=			Launcher and finder
CONF_RUN_DEPENDS=		xfce4-conf>0:x11/xfce4-conf
CONF_DESC=			Configuration utility
DASHBOARD_RUN_DEPENDS=		xfce4-dashboard>0:x11/xfce4-dashboard
DASHBOARD_DESC=			Dashboard application
DEVTOOLS_RUN_DEPENDS=		xfce4-dev-tools>0:devel/xfce4-dev-tools
DEVTOOLS_DESC=			Development tools
GENERICSLIDER_RUN_DEPENDS=	xfce4-generic-slider>0:deskutils/xfce4-generic-slider
GENERICSLIDER_DESC=		Generic slider plugin (for other plugins)
GREYBIRD_DESC=			Install Greybird theme
GREYBIRD_RUN_DEPENDS=		greybird-theme>0:x11-themes/greybird-theme
ICONS_RUN_DEPENDS=		xfce-icons-elementary>0:x11-themes/xfce-icons-elementary
ICONS_DESC=			Elementary icon theme
LIGHTDM_RUN_DEPENDS=		lightdm-gtk-greeter>0:x11/lightdm-gtk-greeter
LIGHTDM_DESC=			LightDM display manager
MIXER_RUN_DEPENDS=		xfce4-mixer>0:audio/xfce4-mixer
MIXER_DESC=			Audio mixer
MOUSEPAD_RUN_DEPENDS=		mousepad>0:editors/mousepad
MOUSEPAD_DESC=			Text editor
NOTIFY_RUN_DEPENDS=		xfce4-notifyd>0:deskutils/xfce4-notifyd
NOTIFY_DESC=			Notification daemon
PAROLE_RUN_DEPENDS=		parole>0:multimedia/xfce4-parole
PAROLE_DESC=			Media player
PANELPROFILES_RUN_DEPENDS=	xfce4-panel-profiles>0:x11-wm/xfce4-panel-profiles
PANELPROFILES_DESC=		Panel configuration utility
SCREENSAVER_RUN_DEPENDS=	xfce4-screensaver>0:x11/xfce4-screensaver
SCREENSAVER_DESC=		Screensaver
TASKMANAGER_RUN_DEPENDS=	xfce4-taskmanager>0:x11/xfce4-taskmanager
TASKMANAGER_DESC=		Task manager
TERMINAL_RUN_DEPENDS=		xfce4-terminal>0:x11/xfce4-terminal
TERMINAL_DESC=			Terminal emulator
TUMBLER_RUN_DEPENDS=		xfce4-tumbler>0:deskutils/xfce4-tumbler
TUMBLER_DESC=			Thumbnail service
VOLUMED_RUN_DEPENDS=		xfce4-volumed-pulse>0:deskutils/xfce4-volumed-pulse
VOLUMED_DESC=			Volume daemon for PulseAudio
WMTHEMES_RUN_DEPENDS=		xfce4-wm-themes>0:misc/xfce4-wm-themes
WMTHEMES_DESC=			Window manager themes
XPM_RUN_DEPENDS=		xfce4-power-manager>0:sysutils/xfce4-power-manager
XPM_DESC=			Power manager

# Plugin descriptions
PLUGINS_DESC=			Install plugins
APPMENUPL_DESC=			Application menu plugin
APPMENUPL_RUN_DEPENDS=		xfce4-appmenu-plugin>0:x11/xfce4-appmenu-plugin
BATTERYPL_DESC=			Battery plugin
BATTERYPL_RUN_DEPENDS=		xfce4-battery-plugin>0:sysutils/xfce4-battery-plugin
BSDCPUFREQPL_DESC=		BSD CPU frequency plugin
BSDCPUFREQPL_RUN_DEPENDS=	xfce4-bsdcpufreq-plugin>0:sysutils/xfce4-bsdcpufreq-plugin
CALCULATORPL_DESC=		Calculator plugin
CALCULATORPL_RUN_DEPENDS=	xfce4-calculator-plugin>0:math/xfce4-calculator-plugin
CLIPMANPL_DESC=			Clipboard manager plugin
CLIPMANPL_RUN_DEPENDS=		xfce4-clipman-plugin>0:x11/xfce4-clipman-plugin
CPUGRAPHPL_DESC=		CPU graph plugin
CPUGRAPHPL_RUN_DEPENDS=		xfce4-cpugraph-plugin>0:sysutils/xfce4-cpugraph-plugin
DATETIMEPL_DESC=		Date and time plugin
DATETIMEPL_RUN_DEPENDS=		xfce4-datetime-plugin>0:x11-clocks/xfce4-datetime-plugin
DICTPL_DESC=			Dictionary plugin
DICTPL_RUN_DEPENDS=		xfce4-dict-plugin>0:textproc/xfce4-dict-plugin
DISKPERFPL_DESC=		Disk performance plugin
DISKPERFPL_RUN_DEPENDS=		xfce4-diskperf-plugin>0:sysutils/xfce4-diskperf-plugin
DOCKLIKEPL_DESC=		Docklike plugin
DOCKLIKEPL_RUN_DEPENDS=		xfce4-docklike-plugin>0:x11/xfce4-docklike-plugin
EYESPL_DESC=			Eyes plugin
EYESPL_RUN_DEPENDS=		xfce4-eyes-plugin>0:games/xfce4-eyes-plugin
FSGUARDPL_DESC=			File system guard plugin
FSGUARDPL_RUN_DEPENDS=		xfce4-fsguard-plugin>0:sysutils/xfce4-fsguard-plugin
GENMONPL_DESC=			Generic monitor plugin
GENMONPL_RUN_DEPENDS=		xfce4-genmon-plugin>0:sysutils/xfce4-genmon-plugin
MAILWATCHPL_DESC=		Mail watch plugin
MAILWATCHPL_RUN_DEPENDS=	xfce4-mailwatch-plugin>0:mail/xfce4-mailwatch-plugin
MOUNTPL_DESC=			Mount plugin
MOUNTPL_RUN_DEPENDS=		xfce4-mount-plugin>0:sysutils/xfce4-mount-plugin
MPCPL_DESC=			MPC plugin
MPCPL_RUN_DEPENDS=		xfce4-mpc-plugin>0:audio/xfce4-mpc-plugin
NETLOADPL_DESC=			Network load plugin
NETLOADPL_RUN_DEPENDS=		xfce4-netload-plugin>0:sysutils/xfce4-netload-plugin
NOTESPL_DESC=			Notes plugin
NOTESPL_RUN_DEPENDS=		xfce4-notes-plugin>0:deskutils/xfce4-notes-plugin
PLACESPL_DESC=			Places plugin
PLACESPL_RUN_DEPENDS=		xfce4-places-plugin>0:sysutils/xfce4-places-plugin
PULSEAUDIOPL_DESC=		PulseAudio plugin
PULSEAUDIOPL_RUN_DEPENDS=	xfce4-pulseaudio-plugin>0:audio/xfce4-pulseaudio-plugin
SCREENSHOOTERPL_DESC=		Screenshot plugin
SCREENSHOOTERPL_RUN_DEPENDS=	xfce4-screenshooter-plugin>0:x11/xfce4-screenshooter-plugin
SMARTBOOKMARKPL_DESC=		Smart bookmark plugin
SMARTBOOKMARKPL_RUN_DEPENDS=	xfce4-smartbookmark-plugin>0:www/xfce4-smartbookmark-plugin
STOPWATCHPL_DESC=		Stopwatch plugin
STOPWATCHPL_RUN_DEPENDS=	xfce4-stopwatch-plugin>0:x11-clocks/xfce4-stopwatch-plugin
SYSTEMLOADPL_DESC=		System load plugin
SYSTEMLOADPL_RUN_DEPENDS=	xfce4-systemload-plugin>0:sysutils/xfce4-systemload-plugin
TIMEOUTPL_DESC=			Time out plugin
TIMEOUTPL_RUN_DEPENDS=		xfce4-time-out-plugin>0:x11-clocks/xfce4-time-out-plugin
TIMERPL_DESC=			Timer plugin
TIMERPL_RUN_DEPENDS=		xfce4-timer-plugin>0:x11-clocks/xfce4-timer-plugin
VERVEPL_DESC=			Verve (command) plugin
VERVEPL_RUN_DEPENDS=		xfce4-verve-plugin>0:x11/xfce4-verve-plugin
WEATHERPL_DESC=			Weather plugin
WEATHERPL_RUN_DEPENDS=		xfce4-weather-plugin>0:misc/xfce4-weather-plugin
WHISKERMENUPL_DESC=		Whisker menu plugin
WHISKERMENUPL_RUN_DEPENDS=	xfce4-whiskermenu-plugin>0:x11/xfce4-whiskermenu-plugin
WINDOWCKPL_DESC=		Window control plugin
WINDOWCKPL_RUN_DEPENDS=		xfce4-windowck-plugin>0:x11/xfce4-windowck-plugin
XKBPL_DESC=			Keyboard layout plugin
XKBPL_RUN_DEPENDS=		xfce4-xkb-plugin>0:deskutils/xfce4-xkb-plugin

do-install:	# empty

.include <bsd.port.mk>
