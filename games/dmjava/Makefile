PORTNAME=	dmjava
PORTVERSION=	1.05
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	LOCAL/oliver \
		http://chaos.zpc.cz/files/
DISTNAME=	dmj${PORTVERSION}

MAINTAINER=	oliver@FreeBSD.org
COMMENT=	Dungeon Master Java is a remake of the classic Dungeon Master by FTL
WWW=		http://homepage.mac.com/aberfield/dmj/

EXTRACT_AFTER_ARGS=	-d ${WRKSRC}

USES=		java zip

NO_BUILD=	yes

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/${PORTNAME}
	@${CP} -r ${WRKSRC}/* ${STAGEDIR}${PREFIX}/${PORTNAME}
	@${ECHO_MSG} ""
	@${ECHO_MSG} "To start dmjava, type 'cd ${PREFIX}/${PORTNAME} && javavm dmnew'"
	@${ECHO_MSG} ""
.include <bsd.port.mk>
