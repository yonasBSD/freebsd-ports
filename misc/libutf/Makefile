PORTNAME=	libutf
PORTVERSION=	2.10
PORTREVISION=	4
CATEGORIES=	misc
MASTER_SITES=	http://www.cse.yorku.ca/ftp/pub/wily/misc/ \
		http://ftp.osuosl.org/pub/nslu2/sources/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	UTF-8 character set support library, including regular expressions

LICENSE=	BSD4CLAUSE

GNU_CONFIGURE=	yes
MAKE_ARGS=	ETCDIR="${DATADIR}"
ALL_TARGET=	tst

PLIST_FILES=	include/ure.h include/utf.h lib/libutf.a \
		share/man/man3/ure.3.gz share/man/man3/utf.3.gz \
		%%DATADIR%%/langcoll.utf

do-install:
	${INSTALL_DATA} ${WRKSRC}/ure.h ${STAGEDIR}${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/utf.h ${STAGEDIR}${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/libutf.a ${STAGEDIR}${PREFIX}/lib
	${INSTALL_MAN} ${WRKSRC}/utf.3 ${STAGEDIR}${PREFIX}/share/man/man3
	${INSTALL_MAN} ${WRKSRC}/ure.3 ${STAGEDIR}${PREFIX}/share/man/man3
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/langcoll.utf ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
