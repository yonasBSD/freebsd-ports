PORTNAME=	threema-web
PORTVERSION=	2.6.2
CATEGORIES=	www net-im
MASTER_SITES=	https://github.com/threema-ch/${PORTNAME}/releases/download/v${PORTVERSION}/
DISTNAME=	${PORTNAME}-${PORTVERSION}-gh

MAINTAINER=	egypcio@FreeBSD.org
COMMENT=	Threema Web application
WWW=		https://github.com/threema-ch/threema-web

LICENSE=	AGPLv3

NO_ARCH=	yes
NO_BUILD=	yes

THREEMA_CREDENTIALS=	Uv0LcCq3kyx6EiRwQW5jVigkhzbp70CjN2CJqzmRxG3UGIdJHSJV6tpo7Gj7YnGB
THREEMA_PUBLICTURNS=	ds-turn-{prefix}.threema.ch:443

THREEMA_ICE_CREDEN?=	${THREEMA_CREDENTIALS}
THREEMA_ICE_SERVER?=	${THREEMA_PUBLICTURNS}
THREEMA_SALTYRTC_HOST?=	saltyrtc-{prefix}.threema.ch
THREEMA_SALTYRTC_PORT?=	443
THREEMA_SALTYRTC_KEY?=	b1337fc8402f7db8ea639e05ed05d65463e24809792f91eca29e88101b4a2171

post-patch:
	${REINPLACE_CMD} "s/${THREEMA_CREDENTIALS}/${THREEMA_ICE_CREDEN}/g" \
	  ${WRKSRC}/*.bundle.js
	${REINPLACE_CMD} "s/${THREEMA_PUBLICTURNS}/${THREEMA_ICE_SERVER}/g" \
	  ${WRKSRC}/*.bundle.js
	${REINPLACE_CMD} "s/SALTYRTC_HOST:[[:space:]]*\"[^\"]*\",/SALTYRTC_HOST:\"${THREEMA_SALTYRTC_HOST}\",/g" \
	  ${WRKSRC}/*.bundle.js
	${REINPLACE_CMD} "s/SALTYRTC_PORT:[[:space:]]*[^,]*,/SALTYRTC_PORT:${THREEMA_SALTYRTC_PORT},/g" \
	  ${WRKSRC}/*.bundle.js
	${REINPLACE_CMD} "s/SALTYRTC_SERVER_KEY:[[:space:]]*\"[^\"]*\",/SALTYRTC_SERVER_KEY:\"${THREEMA_SALTYRTC_KEY}\",/g" \
	  ${WRKSRC}/*.bundle.js

do-install:
	@${MKDIR} ${STAGEDIR}${WWWDIR}
	(cd ${WRKSRC} && \
	  ${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR})

.include <bsd.port.mk>
