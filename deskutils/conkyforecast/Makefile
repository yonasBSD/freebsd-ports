PORTNAME=	conkyforecast
PORTVERSION=	2.24
PORTREVISION=	1
CATEGORIES=	deskutils
MASTER_SITES=	https://launchpad.net/~conky-companions/+archive/ppa/+files/
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Weather forecast script for conky
WWW=		https://code.launchpad.net/~m-buck/+junk/conkyforecast

LICENSE=	GPLv3

RUN_DEPENDS=	conky:sysutils/conky \
		pidof:sysutils/pidof

USES=		gettext python fonts
USE_PYTHON=	distutils concurrent optsuffix

NO_ARCH=	yes
SUB_FILES=	pkg-message

WRKSRC=		${WRKDIR}/src

post-patch:
	@cd ${WRKSRC} && ${REINPLACE_CMD} -e 's,/usr/share/${PORTNAME},${DATADIR},g' \
		setup.py \
		test/conkyForecast.test.conkyrc \
		test/conkyForecast.test.sh \
		example/conkyForecast.fontbased.sh \
		example/conkyForecast.fontbasedtemplate.conkyrc \
		example/conkyForecast.fontbasedtemplate.sh \
		example/conkyForecast.imagebasedtemplate.conkyrc \
		example/conkyForecast.imagebasedtemplate.sh \
		conkyForecast.py \
		conkyForecast \
		conkyForecast-SunsetSunriseCountdown
	@cd ${WRKSRC} && ${REINPLACE_CMD} -e 's,/usr/bin/python,/usr/bin/env,g' \
		conkyForecast \
		conkyForecast-SunsetSunriseCountdown
	@cd ${WRKSRC} && ${RM} -r test/*.bak example/*.bak

post-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	@${INSTALL_DATA} ${WRKSRC}/fonts/* ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
