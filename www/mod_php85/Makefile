CATEGORIES=	www devel
PKGNAMEPREFIX=	mod_

MAINTAINER=	bofh@FreeBSD.org

CONFLICTS_INSTALL=	mod_php[0-9][0-9]

MASTERDIR=	${.CURDIR}/../../lang/php85

OPTIONS_DEFINE=		AP2FILTER
OPTIONS_EXCLUDE=	CGI CLI EMBED FPM

AP2FILTER_DESC=	Use Apache 2.x filter interface (experimental)

AP2FILTER_CONFIGURE_ON=--with-apxs2filter=${APXS}
AP2FILTER_CONFIGURE_OFF=--with-apxs2=${APXS}

.include "${MASTERDIR}/Makefile"
