PORTNAME=	thinkingrock
PORTVERSION=	2.2.1
PORTREVISION=	3
CATEGORIES=	deskutils java
MASTER_SITES=	SF/${PORTNAME}/ThinkingRock/TR%20${PORTVERSION}
DISTNAME=	tr-${PORTVERSION}

MAINTAINER=	beat@FreeBSD.org
COMMENT=	Application for collecting and processing your thoughts
WWW=		http://www.thinkingrock.com.au/

RUN_DEPENDS=	${LOCALBASE}/bin/xdg-open:devel/xdg-utils \
		${LOCALBASE}/bin/xdg-email:devel/xdg-utils

USES=		java
NO_BUILD=	yes

SUB_FILES=	pkg-message

post-patch:
	@${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|' ${WRKSRC}/bin/tr
	@${REINPLACE_CMD} -e \
		's|default_options="|default_options="-J-Djava.endorsed.dirs=${PREFIX}/${PORTNAME}/tr/modules/ext/endorsed |' \
		${WRKSRC}/etc/tr.conf
	@${RM} ${WRKSRC}/bin/tr.bak ${WRKSRC}/bin/tr.exe \
		${WRKSRC}/bin/tr_w.exe ${WRKSRC}/etc/tr.conf.bak

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/${PORTNAME}
	@${CP} -r ${WRKSRC}/* ${STAGEDIR}${PREFIX}/${PORTNAME}
	@${LN} -sf ${PREFIX}/${PORTNAME}/bin/tr ${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	@${ECHO} bin/${PORTNAME} >> ${TMPPLIST}
	@(cd ${WRKSRC}; ${FIND} . ! -type d) | ${SORT} | ${SED} "s|^.|${PORTNAME}|" >> ${TMPPLIST}
	@(cd ${WRKSRC}; ${FIND} . -type d -empty) | ${SORT} -r | ${SED} "s|^.|@dir ${PORTNAME}|" >> ${TMPPLIST}

.include <bsd.port.mk>
