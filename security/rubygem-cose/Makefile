PORTNAME=	cose
PORTVERSION=	1.2.1
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Ruby implementation of RFC 8152 CBOR Object Signing and Encryption
WWW=		https://github.com/cedarcode/cose-ruby

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-cbor>=0.5.9<0.6:devel/rubygem-cbor \
		rubygem-openssl-signature_algorithm>=1.0<2:security/rubygem-openssl-signature_algorithm

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
