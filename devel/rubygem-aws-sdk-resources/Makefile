PORTNAME=	aws-sdk-resources
PORTVERSION=	3.236.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	AWS SDK for Ruby Resources
WWW=		https://github.com/aws/aws-sdk-ruby/tree/version-3/gems/aws-sdk-resources

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-aws-sdk-accessanalyzer>=1<2:devel/rubygem-aws-sdk-accessanalyzer \
		rubygem-aws-sdk-account>=1<2:devel/rubygem-aws-sdk-account \
		rubygem-aws-sdk-acm>=1<2:devel/rubygem-aws-sdk-acm \
		rubygem-aws-sdk-acmpca>=1<2:devel/rubygem-aws-sdk-acmpca \
		rubygem-aws-sdk-aiops>=1<2:devel/rubygem-aws-sdk-aiops \
		rubygem-aws-sdk-amplify>=1<2:devel/rubygem-aws-sdk-amplify \
		rubygem-aws-sdk-amplifybackend>=1<2:devel/rubygem-aws-sdk-amplifybackend \
		rubygem-aws-sdk-amplifyuibuilder>=1<2:devel/rubygem-aws-sdk-amplifyuibuilder \
		rubygem-aws-sdk-apigateway>=1<2:devel/rubygem-aws-sdk-apigateway \
		rubygem-aws-sdk-apigatewaymanagementapi>=1<2:devel/rubygem-aws-sdk-apigatewaymanagementapi \
		rubygem-aws-sdk-apigatewayv2>=1<2:devel/rubygem-aws-sdk-apigatewayv2 \
		rubygem-aws-sdk-appconfig>=1<2:devel/rubygem-aws-sdk-appconfig \
		rubygem-aws-sdk-appconfigdata>=1<2:devel/rubygem-aws-sdk-appconfigdata \
		rubygem-aws-sdk-appfabric>=1<2:devel/rubygem-aws-sdk-appfabric \
		rubygem-aws-sdk-appflow>=1<2:devel/rubygem-aws-sdk-appflow \
		rubygem-aws-sdk-appintegrationsservice>=1<2:devel/rubygem-aws-sdk-appintegrationsservice \
		rubygem-aws-sdk-applicationautoscaling>=1<2:devel/rubygem-aws-sdk-applicationautoscaling \
		rubygem-aws-sdk-applicationcostprofiler>=1<2:devel/rubygem-aws-sdk-applicationcostprofiler \
		rubygem-aws-sdk-applicationdiscoveryservice>=1<2:devel/rubygem-aws-sdk-applicationdiscoveryservice \
		rubygem-aws-sdk-applicationinsights>=1<2:devel/rubygem-aws-sdk-applicationinsights \
		rubygem-aws-sdk-applicationsignals>=1<2:devel/rubygem-aws-sdk-applicationsignals \
		rubygem-aws-sdk-appmesh>=1<2:devel/rubygem-aws-sdk-appmesh \
		rubygem-aws-sdk-appregistry>=1<2:devel/rubygem-aws-sdk-appregistry \
		rubygem-aws-sdk-apprunner>=1<2:devel/rubygem-aws-sdk-apprunner \
		rubygem-aws-sdk-appstream>=1<2:devel/rubygem-aws-sdk-appstream \
		rubygem-aws-sdk-appsync>=1<2:devel/rubygem-aws-sdk-appsync \
		rubygem-aws-sdk-apptest>=1<2:devel/rubygem-aws-sdk-apptest \
		rubygem-aws-sdk-arczonalshift>=1<2:devel/rubygem-aws-sdk-arczonalshift \
		rubygem-aws-sdk-artifact>=1<2:devel/rubygem-aws-sdk-artifact \
		rubygem-aws-sdk-athena>=1<2:devel/rubygem-aws-sdk-athena \
		rubygem-aws-sdk-auditmanager>=1<2:devel/rubygem-aws-sdk-auditmanager \
		rubygem-aws-sdk-augmentedairuntime>=1<2:devel/rubygem-aws-sdk-augmentedairuntime \
		rubygem-aws-sdk-autoscaling>=1<2:devel/rubygem-aws-sdk-autoscaling \
		rubygem-aws-sdk-autoscalingplans>=1<2:devel/rubygem-aws-sdk-autoscalingplans \
		rubygem-aws-sdk-b2bi>=1<2:devel/rubygem-aws-sdk-b2bi \
		rubygem-aws-sdk-backup>=1<2:devel/rubygem-aws-sdk-backup \
		rubygem-aws-sdk-backupgateway>=1<2:devel/rubygem-aws-sdk-backupgateway \
		rubygem-aws-sdk-backupsearch>=1<2:devel/rubygem-aws-sdk-backupsearch \
		rubygem-aws-sdk-batch>=1<2:devel/rubygem-aws-sdk-batch \
		rubygem-aws-sdk-bcmdataexports>=1<2:devel/rubygem-aws-sdk-bcmdataexports \
		rubygem-aws-sdk-bcmpricingcalculator>=1<2:devel/rubygem-aws-sdk-bcmpricingcalculator \
		rubygem-aws-sdk-bedrock>=1<2:devel/rubygem-aws-sdk-bedrock \
		rubygem-aws-sdk-bedrockagent>=1<2:devel/rubygem-aws-sdk-bedrockagent \
		rubygem-aws-sdk-bedrockagentcore>=1<2:devel/rubygem-aws-sdk-bedrockagentcore \
		rubygem-aws-sdk-bedrockagentcorecontrol>=1<2:devel/rubygem-aws-sdk-bedrockagentcorecontrol \
		rubygem-aws-sdk-bedrockagentruntime>=1<2:devel/rubygem-aws-sdk-bedrockagentruntime \
		rubygem-aws-sdk-bedrockdataautomation>=1<2:devel/rubygem-aws-sdk-bedrockdataautomation \
		rubygem-aws-sdk-bedrockdataautomationruntime>=1<2:devel/rubygem-aws-sdk-bedrockdataautomationruntime \
		rubygem-aws-sdk-bedrockruntime>=1<2:devel/rubygem-aws-sdk-bedrockruntime \
		rubygem-aws-sdk-billing>=1<2:devel/rubygem-aws-sdk-billing \
		rubygem-aws-sdk-billingconductor>=1<2:devel/rubygem-aws-sdk-billingconductor \
		rubygem-aws-sdk-braket>=1<2:devel/rubygem-aws-sdk-braket \
		rubygem-aws-sdk-budgets>=1<2:devel/rubygem-aws-sdk-budgets \
		rubygem-aws-sdk-chatbot>=1<2:devel/rubygem-aws-sdk-chatbot \
		rubygem-aws-sdk-chime>=1<2:devel/rubygem-aws-sdk-chime \
		rubygem-aws-sdk-chimesdkidentity>=1<2:devel/rubygem-aws-sdk-chimesdkidentity \
		rubygem-aws-sdk-chimesdkmediapipelines>=1<2:devel/rubygem-aws-sdk-chimesdkmediapipelines \
		rubygem-aws-sdk-chimesdkmeetings>=1<2:devel/rubygem-aws-sdk-chimesdkmeetings \
		rubygem-aws-sdk-chimesdkmessaging>=1<2:devel/rubygem-aws-sdk-chimesdkmessaging \
		rubygem-aws-sdk-chimesdkvoice>=1<2:devel/rubygem-aws-sdk-chimesdkvoice \
		rubygem-aws-sdk-cleanrooms>=1<2:devel/rubygem-aws-sdk-cleanrooms \
		rubygem-aws-sdk-cleanroomsml>=1<2:devel/rubygem-aws-sdk-cleanroomsml \
		rubygem-aws-sdk-cloud9>=1<2:devel/rubygem-aws-sdk-cloud9 \
		rubygem-aws-sdk-cloudcontrolapi>=1<2:devel/rubygem-aws-sdk-cloudcontrolapi \
		rubygem-aws-sdk-clouddirectory>=1<2:devel/rubygem-aws-sdk-clouddirectory \
		rubygem-aws-sdk-cloudformation>=1<2:devel/rubygem-aws-sdk-cloudformation \
		rubygem-aws-sdk-cloudfront>=1<2:devel/rubygem-aws-sdk-cloudfront \
		rubygem-aws-sdk-cloudfrontkeyvaluestore>=1<2:devel/rubygem-aws-sdk-cloudfrontkeyvaluestore \
		rubygem-aws-sdk-cloudhsm>=1<2:devel/rubygem-aws-sdk-cloudhsm \
		rubygem-aws-sdk-cloudhsmv2>=1<2:devel/rubygem-aws-sdk-cloudhsmv2 \
		rubygem-aws-sdk-cloudsearch>=1<2:devel/rubygem-aws-sdk-cloudsearch \
		rubygem-aws-sdk-cloudsearchdomain>=1<2:devel/rubygem-aws-sdk-cloudsearchdomain \
		rubygem-aws-sdk-cloudtrail>=1<2:devel/rubygem-aws-sdk-cloudtrail \
		rubygem-aws-sdk-cloudtraildata>=1<2:devel/rubygem-aws-sdk-cloudtraildata \
		rubygem-aws-sdk-cloudwatch>=1<2:devel/rubygem-aws-sdk-cloudwatch \
		rubygem-aws-sdk-cloudwatchevents>=1<2:devel/rubygem-aws-sdk-cloudwatchevents \
		rubygem-aws-sdk-cloudwatchevidently>=1<2:devel/rubygem-aws-sdk-cloudwatchevidently \
		rubygem-aws-sdk-cloudwatchlogs>=1<2:devel/rubygem-aws-sdk-cloudwatchlogs \
		rubygem-aws-sdk-cloudwatchrum>=1<2:devel/rubygem-aws-sdk-cloudwatchrum \
		rubygem-aws-sdk-codeartifact>=1<2:devel/rubygem-aws-sdk-codeartifact \
		rubygem-aws-sdk-codebuild>=1<2:devel/rubygem-aws-sdk-codebuild \
		rubygem-aws-sdk-codecatalyst>=1<2:devel/rubygem-aws-sdk-codecatalyst \
		rubygem-aws-sdk-codecommit>=1<2:devel/rubygem-aws-sdk-codecommit \
		rubygem-aws-sdk-codeconnections>=1<2:devel/rubygem-aws-sdk-codeconnections \
		rubygem-aws-sdk-codedeploy>=1<2:devel/rubygem-aws-sdk-codedeploy \
		rubygem-aws-sdk-codeguruprofiler>=1<2:devel/rubygem-aws-sdk-codeguruprofiler \
		rubygem-aws-sdk-codegurureviewer>=1<2:devel/rubygem-aws-sdk-codegurureviewer \
		rubygem-aws-sdk-codegurusecurity>=1<2:devel/rubygem-aws-sdk-codegurusecurity \
		rubygem-aws-sdk-codepipeline>=1<2:devel/rubygem-aws-sdk-codepipeline \
		rubygem-aws-sdk-codestarconnections>=1<2:devel/rubygem-aws-sdk-codestarconnections \
		rubygem-aws-sdk-codestarnotifications>=1<2:devel/rubygem-aws-sdk-codestarnotifications \
		rubygem-aws-sdk-cognitoidentity>=1<2:devel/rubygem-aws-sdk-cognitoidentity \
		rubygem-aws-sdk-cognitoidentityprovider>=1<2:devel/rubygem-aws-sdk-cognitoidentityprovider \
		rubygem-aws-sdk-cognitosync>=1<2:devel/rubygem-aws-sdk-cognitosync \
		rubygem-aws-sdk-comprehend>=1<2:devel/rubygem-aws-sdk-comprehend \
		rubygem-aws-sdk-comprehendmedical>=1<2:devel/rubygem-aws-sdk-comprehendmedical \
		rubygem-aws-sdk-computeoptimizer>=1<2:devel/rubygem-aws-sdk-computeoptimizer \
		rubygem-aws-sdk-configservice>=1<2:devel/rubygem-aws-sdk-configservice \
		rubygem-aws-sdk-connect>=1<2:devel/rubygem-aws-sdk-connect \
		rubygem-aws-sdk-connectcampaignservice>=1<2:devel/rubygem-aws-sdk-connectcampaignservice \
		rubygem-aws-sdk-connectcampaignsv2>=1<2:devel/rubygem-aws-sdk-connectcampaignsv2 \
		rubygem-aws-sdk-connectcases>=1<2:devel/rubygem-aws-sdk-connectcases \
		rubygem-aws-sdk-connectcontactlens>=1<2:devel/rubygem-aws-sdk-connectcontactlens \
		rubygem-aws-sdk-connectparticipant>=1<2:devel/rubygem-aws-sdk-connectparticipant \
		rubygem-aws-sdk-connectwisdomservice>=1<2:devel/rubygem-aws-sdk-connectwisdomservice \
		rubygem-aws-sdk-controlcatalog>=1<2:devel/rubygem-aws-sdk-controlcatalog \
		rubygem-aws-sdk-controltower>=1<2:devel/rubygem-aws-sdk-controltower \
		rubygem-aws-sdk-costandusagereportservice>=1<2:devel/rubygem-aws-sdk-costandusagereportservice \
		rubygem-aws-sdk-costexplorer>=1<2:devel/rubygem-aws-sdk-costexplorer \
		rubygem-aws-sdk-costoptimizationhub>=1<2:devel/rubygem-aws-sdk-costoptimizationhub \
		rubygem-aws-sdk-customerprofiles>=1<2:devel/rubygem-aws-sdk-customerprofiles \
		rubygem-aws-sdk-databasemigrationservice>=1<2:devel/rubygem-aws-sdk-databasemigrationservice \
		rubygem-aws-sdk-dataexchange>=1<2:devel/rubygem-aws-sdk-dataexchange \
		rubygem-aws-sdk-datapipeline>=1<2:devel/rubygem-aws-sdk-datapipeline \
		rubygem-aws-sdk-datasync>=1<2:devel/rubygem-aws-sdk-datasync \
		rubygem-aws-sdk-datazone>=1<2:devel/rubygem-aws-sdk-datazone \
		rubygem-aws-sdk-dax>=1<2:devel/rubygem-aws-sdk-dax \
		rubygem-aws-sdk-deadline>=1<2:devel/rubygem-aws-sdk-deadline \
		rubygem-aws-sdk-detective>=1<2:devel/rubygem-aws-sdk-detective \
		rubygem-aws-sdk-devicefarm>=1<2:devel/rubygem-aws-sdk-devicefarm \
		rubygem-aws-sdk-devopsguru>=1<2:devel/rubygem-aws-sdk-devopsguru \
		rubygem-aws-sdk-directconnect>=1<2:devel/rubygem-aws-sdk-directconnect \
		rubygem-aws-sdk-directoryservice>=1<2:devel/rubygem-aws-sdk-directoryservice \
		rubygem-aws-sdk-directoryservicedata>=1<2:devel/rubygem-aws-sdk-directoryservicedata \
		rubygem-aws-sdk-dlm>=1<2:devel/rubygem-aws-sdk-dlm \
		rubygem-aws-sdk-docdb>=1<2:devel/rubygem-aws-sdk-docdb \
		rubygem-aws-sdk-docdbelastic>=1<2:devel/rubygem-aws-sdk-docdbelastic \
		rubygem-aws-sdk-drs>=1<2:devel/rubygem-aws-sdk-drs \
		rubygem-aws-sdk-dsql>=1<2:devel/rubygem-aws-sdk-dsql \
		rubygem-aws-sdk-dynamodb>=1<2:devel/rubygem-aws-sdk-dynamodb \
		rubygem-aws-sdk-dynamodbstreams>=1<2:devel/rubygem-aws-sdk-dynamodbstreams \
		rubygem-aws-sdk-ebs>=1<2:devel/rubygem-aws-sdk-ebs \
		rubygem-aws-sdk-ec2>=1<2:devel/rubygem-aws-sdk-ec2 \
		rubygem-aws-sdk-ec2instanceconnect>=1<2:devel/rubygem-aws-sdk-ec2instanceconnect \
		rubygem-aws-sdk-ecr>=1<2:devel/rubygem-aws-sdk-ecr \
		rubygem-aws-sdk-ecrpublic>=1<2:devel/rubygem-aws-sdk-ecrpublic \
		rubygem-aws-sdk-ecs>=1<2:devel/rubygem-aws-sdk-ecs \
		rubygem-aws-sdk-efs>=1<2:devel/rubygem-aws-sdk-efs \
		rubygem-aws-sdk-eks>=1<2:devel/rubygem-aws-sdk-eks \
		rubygem-aws-sdk-eksauth>=1<2:devel/rubygem-aws-sdk-eksauth \
		rubygem-aws-sdk-elasticache>=1<2:devel/rubygem-aws-sdk-elasticache \
		rubygem-aws-sdk-elasticbeanstalk>=1<2:devel/rubygem-aws-sdk-elasticbeanstalk \
		rubygem-aws-sdk-elasticloadbalancing>=1<2:devel/rubygem-aws-sdk-elasticloadbalancing \
		rubygem-aws-sdk-elasticloadbalancingv2>=1<2:devel/rubygem-aws-sdk-elasticloadbalancingv2 \
		rubygem-aws-sdk-elasticsearchservice>=1<2:devel/rubygem-aws-sdk-elasticsearchservice \
		rubygem-aws-sdk-elastictranscoder>=1<2:devel/rubygem-aws-sdk-elastictranscoder \
		rubygem-aws-sdk-emr>=1<2:devel/rubygem-aws-sdk-emr \
		rubygem-aws-sdk-emrcontainers>=1<2:devel/rubygem-aws-sdk-emrcontainers \
		rubygem-aws-sdk-emrserverless>=1<2:devel/rubygem-aws-sdk-emrserverless \
		rubygem-aws-sdk-entityresolution>=1<2:devel/rubygem-aws-sdk-entityresolution \
		rubygem-aws-sdk-eventbridge>=1<2:devel/rubygem-aws-sdk-eventbridge \
		rubygem-aws-sdk-evs>=1<2:devel/rubygem-aws-sdk-evs \
		rubygem-aws-sdk-finspace>=1<2:devel/rubygem-aws-sdk-finspace \
		rubygem-aws-sdk-finspacedata>=1<2:devel/rubygem-aws-sdk-finspacedata \
		rubygem-aws-sdk-firehose>=1<2:devel/rubygem-aws-sdk-firehose \
		rubygem-aws-sdk-fis>=1<2:devel/rubygem-aws-sdk-fis \
		rubygem-aws-sdk-fms>=1<2:devel/rubygem-aws-sdk-fms \
		rubygem-aws-sdk-forecastqueryservice>=1<2:devel/rubygem-aws-sdk-forecastqueryservice \
		rubygem-aws-sdk-forecastservice>=1<2:devel/rubygem-aws-sdk-forecastservice \
		rubygem-aws-sdk-frauddetector>=1<2:devel/rubygem-aws-sdk-frauddetector \
		rubygem-aws-sdk-freetier>=1<2:devel/rubygem-aws-sdk-freetier \
		rubygem-aws-sdk-fsx>=1<2:devel/rubygem-aws-sdk-fsx \
		rubygem-aws-sdk-gamelift>=1<2:devel/rubygem-aws-sdk-gamelift \
		rubygem-aws-sdk-gameliftstreams>=1<2:devel/rubygem-aws-sdk-gameliftstreams \
		rubygem-aws-sdk-geomaps>=1<2:devel/rubygem-aws-sdk-geomaps \
		rubygem-aws-sdk-geoplaces>=1<2:devel/rubygem-aws-sdk-geoplaces \
		rubygem-aws-sdk-georoutes>=1<2:devel/rubygem-aws-sdk-georoutes \
		rubygem-aws-sdk-glacier>=1<2:devel/rubygem-aws-sdk-glacier \
		rubygem-aws-sdk-globalaccelerator>=1<2:devel/rubygem-aws-sdk-globalaccelerator \
		rubygem-aws-sdk-glue>=1<2:devel/rubygem-aws-sdk-glue \
		rubygem-aws-sdk-gluedatabrew>=1<2:devel/rubygem-aws-sdk-gluedatabrew \
		rubygem-aws-sdk-greengrass>=1<2:devel/rubygem-aws-sdk-greengrass \
		rubygem-aws-sdk-greengrassv2>=1<2:devel/rubygem-aws-sdk-greengrassv2 \
		rubygem-aws-sdk-groundstation>=1<2:devel/rubygem-aws-sdk-groundstation \
		rubygem-aws-sdk-guardduty>=1<2:devel/rubygem-aws-sdk-guardduty \
		rubygem-aws-sdk-health>=1<2:devel/rubygem-aws-sdk-health \
		rubygem-aws-sdk-healthlake>=1<2:devel/rubygem-aws-sdk-healthlake \
		rubygem-aws-sdk-iam>=1<2:devel/rubygem-aws-sdk-iam \
		rubygem-aws-sdk-identitystore>=1<2:devel/rubygem-aws-sdk-identitystore \
		rubygem-aws-sdk-imagebuilder>=1<2:devel/rubygem-aws-sdk-imagebuilder \
		rubygem-aws-sdk-importexport>=1<2:devel/rubygem-aws-sdk-importexport \
		rubygem-aws-sdk-inspector>=1<2:devel/rubygem-aws-sdk-inspector \
		rubygem-aws-sdk-inspector2>=1<2:devel/rubygem-aws-sdk-inspector2 \
		rubygem-aws-sdk-inspectorscan>=1<2:devel/rubygem-aws-sdk-inspectorscan \
		rubygem-aws-sdk-internetmonitor>=1<2:devel/rubygem-aws-sdk-internetmonitor \
		rubygem-aws-sdk-invoicing>=1<2:devel/rubygem-aws-sdk-invoicing \
		rubygem-aws-sdk-iot>=1<2:devel/rubygem-aws-sdk-iot \
		rubygem-aws-sdk-iotanalytics>=1<2:devel/rubygem-aws-sdk-iotanalytics \
		rubygem-aws-sdk-iotdataplane>=1<2:devel/rubygem-aws-sdk-iotdataplane \
		rubygem-aws-sdk-iotdeviceadvisor>=1<2:devel/rubygem-aws-sdk-iotdeviceadvisor \
		rubygem-aws-sdk-iotevents>=1<2:devel/rubygem-aws-sdk-iotevents \
		rubygem-aws-sdk-ioteventsdata>=1<2:devel/rubygem-aws-sdk-ioteventsdata \
		rubygem-aws-sdk-iotfleethub>=1<2:devel/rubygem-aws-sdk-iotfleethub \
		rubygem-aws-sdk-iotfleetwise>=1<2:devel/rubygem-aws-sdk-iotfleetwise \
		rubygem-aws-sdk-iotjobsdataplane>=1<2:devel/rubygem-aws-sdk-iotjobsdataplane \
		rubygem-aws-sdk-iotmanagedintegrations>=1<2:devel/rubygem-aws-sdk-iotmanagedintegrations \
		rubygem-aws-sdk-iotsecuretunneling>=1<2:devel/rubygem-aws-sdk-iotsecuretunneling \
		rubygem-aws-sdk-iotsitewise>=1<2:devel/rubygem-aws-sdk-iotsitewise \
		rubygem-aws-sdk-iotthingsgraph>=1<2:devel/rubygem-aws-sdk-iotthingsgraph \
		rubygem-aws-sdk-iottwinmaker>=1<2:devel/rubygem-aws-sdk-iottwinmaker \
		rubygem-aws-sdk-iotwireless>=1<2:devel/rubygem-aws-sdk-iotwireless \
		rubygem-aws-sdk-ivs>=1<2:devel/rubygem-aws-sdk-ivs \
		rubygem-aws-sdk-ivschat>=1<2:devel/rubygem-aws-sdk-ivschat \
		rubygem-aws-sdk-ivsrealtime>=1<2:devel/rubygem-aws-sdk-ivsrealtime \
		rubygem-aws-sdk-kafka>=1<2:devel/rubygem-aws-sdk-kafka \
		rubygem-aws-sdk-kafkaconnect>=1<2:devel/rubygem-aws-sdk-kafkaconnect \
		rubygem-aws-sdk-kendra>=1<2:devel/rubygem-aws-sdk-kendra \
		rubygem-aws-sdk-kendraranking>=1<2:devel/rubygem-aws-sdk-kendraranking \
		rubygem-aws-sdk-keyspaces>=1<2:devel/rubygem-aws-sdk-keyspaces \
		rubygem-aws-sdk-keyspacesstreams>=1<2:devel/rubygem-aws-sdk-keyspacesstreams \
		rubygem-aws-sdk-kinesis>=1<2:devel/rubygem-aws-sdk-kinesis \
		rubygem-aws-sdk-kinesisanalytics>=1<2:devel/rubygem-aws-sdk-kinesisanalytics \
		rubygem-aws-sdk-kinesisanalyticsv2>=1<2:devel/rubygem-aws-sdk-kinesisanalyticsv2 \
		rubygem-aws-sdk-kinesisvideo>=1<2:devel/rubygem-aws-sdk-kinesisvideo \
		rubygem-aws-sdk-kinesisvideoarchivedmedia>=1<2:devel/rubygem-aws-sdk-kinesisvideoarchivedmedia \
		rubygem-aws-sdk-kinesisvideomedia>=1<2:devel/rubygem-aws-sdk-kinesisvideomedia \
		rubygem-aws-sdk-kinesisvideosignalingchannels>=1<2:devel/rubygem-aws-sdk-kinesisvideosignalingchannels \
		rubygem-aws-sdk-kinesisvideowebrtcstorage>=1<2:devel/rubygem-aws-sdk-kinesisvideowebrtcstorage \
		rubygem-aws-sdk-kms>=1<2:devel/rubygem-aws-sdk-kms \
		rubygem-aws-sdk-lakeformation>=1<2:devel/rubygem-aws-sdk-lakeformation \
		rubygem-aws-sdk-lambda>=1<2:devel/rubygem-aws-sdk-lambda \
		rubygem-aws-sdk-launchwizard>=1<2:devel/rubygem-aws-sdk-launchwizard \
		rubygem-aws-sdk-lex>=1<2:devel/rubygem-aws-sdk-lex \
		rubygem-aws-sdk-lexmodelbuildingservice>=1<2:devel/rubygem-aws-sdk-lexmodelbuildingservice \
		rubygem-aws-sdk-lexmodelsv2>=1<2:devel/rubygem-aws-sdk-lexmodelsv2 \
		rubygem-aws-sdk-lexruntimev2>=1<2:devel/rubygem-aws-sdk-lexruntimev2 \
		rubygem-aws-sdk-licensemanager>=1<2:devel/rubygem-aws-sdk-licensemanager \
		rubygem-aws-sdk-licensemanagerlinuxsubscriptions>=1<2:devel/rubygem-aws-sdk-licensemanagerlinuxsubscriptions \
		rubygem-aws-sdk-licensemanagerusersubscriptions>=1<2:devel/rubygem-aws-sdk-licensemanagerusersubscriptions \
		rubygem-aws-sdk-lightsail>=1<2:devel/rubygem-aws-sdk-lightsail \
		rubygem-aws-sdk-locationservice>=1<2:devel/rubygem-aws-sdk-locationservice \
		rubygem-aws-sdk-lookoutequipment>=1<2:devel/rubygem-aws-sdk-lookoutequipment \
		rubygem-aws-sdk-lookoutforvision>=1<2:devel/rubygem-aws-sdk-lookoutforvision \
		rubygem-aws-sdk-lookoutmetrics>=1<2:devel/rubygem-aws-sdk-lookoutmetrics \
		rubygem-aws-sdk-machinelearning>=1<2:devel/rubygem-aws-sdk-machinelearning \
		rubygem-aws-sdk-macie2>=1<2:devel/rubygem-aws-sdk-macie2 \
		rubygem-aws-sdk-mailmanager>=1<2:devel/rubygem-aws-sdk-mailmanager \
		rubygem-aws-sdk-mainframemodernization>=1<2:devel/rubygem-aws-sdk-mainframemodernization \
		rubygem-aws-sdk-managedblockchain>=1<2:devel/rubygem-aws-sdk-managedblockchain \
		rubygem-aws-sdk-managedblockchainquery>=1<2:devel/rubygem-aws-sdk-managedblockchainquery \
		rubygem-aws-sdk-managedgrafana>=1<2:devel/rubygem-aws-sdk-managedgrafana \
		rubygem-aws-sdk-marketplaceagreement>=1<2:devel/rubygem-aws-sdk-marketplaceagreement \
		rubygem-aws-sdk-marketplacecatalog>=1<2:devel/rubygem-aws-sdk-marketplacecatalog \
		rubygem-aws-sdk-marketplacecommerceanalytics>=1<2:devel/rubygem-aws-sdk-marketplacecommerceanalytics \
		rubygem-aws-sdk-marketplacedeployment>=1<2:devel/rubygem-aws-sdk-marketplacedeployment \
		rubygem-aws-sdk-marketplaceentitlementservice>=1<2:devel/rubygem-aws-sdk-marketplaceentitlementservice \
		rubygem-aws-sdk-marketplacemetering>=1<2:devel/rubygem-aws-sdk-marketplacemetering \
		rubygem-aws-sdk-marketplacereporting>=1<2:devel/rubygem-aws-sdk-marketplacereporting \
		rubygem-aws-sdk-mediaconnect>=1<2:devel/rubygem-aws-sdk-mediaconnect \
		rubygem-aws-sdk-mediaconvert>=1<2:devel/rubygem-aws-sdk-mediaconvert \
		rubygem-aws-sdk-medialive>=1<2:devel/rubygem-aws-sdk-medialive \
		rubygem-aws-sdk-mediapackage>=1<2:devel/rubygem-aws-sdk-mediapackage \
		rubygem-aws-sdk-mediapackagev2>=1<2:devel/rubygem-aws-sdk-mediapackagev2 \
		rubygem-aws-sdk-mediapackagevod>=1<2:devel/rubygem-aws-sdk-mediapackagevod \
		rubygem-aws-sdk-mediastore>=1<2:devel/rubygem-aws-sdk-mediastore \
		rubygem-aws-sdk-mediastoredata>=1<2:devel/rubygem-aws-sdk-mediastoredata \
		rubygem-aws-sdk-mediatailor>=1<2:devel/rubygem-aws-sdk-mediatailor \
		rubygem-aws-sdk-medicalimaging>=1<2:devel/rubygem-aws-sdk-medicalimaging \
		rubygem-aws-sdk-memorydb>=1<2:devel/rubygem-aws-sdk-memorydb \
		rubygem-aws-sdk-mgn>=1<2:devel/rubygem-aws-sdk-mgn \
		rubygem-aws-sdk-migrationhub>=1<2:devel/rubygem-aws-sdk-migrationhub \
		rubygem-aws-sdk-migrationhubconfig>=1<2:devel/rubygem-aws-sdk-migrationhubconfig \
		rubygem-aws-sdk-migrationhuborchestrator>=1<2:devel/rubygem-aws-sdk-migrationhuborchestrator \
		rubygem-aws-sdk-migrationhubrefactorspaces>=1<2:devel/rubygem-aws-sdk-migrationhubrefactorspaces \
		rubygem-aws-sdk-migrationhubstrategyrecommendations>=1<2:devel/rubygem-aws-sdk-migrationhubstrategyrecommendations \
		rubygem-aws-sdk-mpa>=1<2:devel/rubygem-aws-sdk-mpa \
		rubygem-aws-sdk-mq>=1<2:devel/rubygem-aws-sdk-mq \
		rubygem-aws-sdk-mturk>=1<2:devel/rubygem-aws-sdk-mturk \
		rubygem-aws-sdk-mwaa>=1<2:devel/rubygem-aws-sdk-mwaa \
		rubygem-aws-sdk-neptune>=1<2:devel/rubygem-aws-sdk-neptune \
		rubygem-aws-sdk-neptunedata>=1<2:devel/rubygem-aws-sdk-neptunedata \
		rubygem-aws-sdk-neptunegraph>=1<2:devel/rubygem-aws-sdk-neptunegraph \
		rubygem-aws-sdk-networkfirewall>=1<2:devel/rubygem-aws-sdk-networkfirewall \
		rubygem-aws-sdk-networkflowmonitor>=1<2:devel/rubygem-aws-sdk-networkflowmonitor \
		rubygem-aws-sdk-networkmanager>=1<2:devel/rubygem-aws-sdk-networkmanager \
		rubygem-aws-sdk-networkmonitor>=1<2:devel/rubygem-aws-sdk-networkmonitor \
		rubygem-aws-sdk-notifications>=1<2:devel/rubygem-aws-sdk-notifications \
		rubygem-aws-sdk-notificationscontacts>=1<2:devel/rubygem-aws-sdk-notificationscontacts \
		rubygem-aws-sdk-oam>=1<2:devel/rubygem-aws-sdk-oam \
		rubygem-aws-sdk-observabilityadmin>=1<2:devel/rubygem-aws-sdk-observabilityadmin \
		rubygem-aws-sdk-odb>=1<2:devel/rubygem-aws-sdk-odb \
		rubygem-aws-sdk-omics>=1<2:devel/rubygem-aws-sdk-omics \
		rubygem-aws-sdk-opensearchserverless>=1<2:devel/rubygem-aws-sdk-opensearchserverless \
		rubygem-aws-sdk-opensearchservice>=1<2:devel/rubygem-aws-sdk-opensearchservice \
		rubygem-aws-sdk-opsworks>=1<2:devel/rubygem-aws-sdk-opsworks \
		rubygem-aws-sdk-opsworkscm>=1<2:devel/rubygem-aws-sdk-opsworkscm \
		rubygem-aws-sdk-organizations>=1<2:devel/rubygem-aws-sdk-organizations \
		rubygem-aws-sdk-osis>=1<2:devel/rubygem-aws-sdk-osis \
		rubygem-aws-sdk-outposts>=1<2:devel/rubygem-aws-sdk-outposts \
		rubygem-aws-sdk-panorama>=1<2:devel/rubygem-aws-sdk-panorama \
		rubygem-aws-sdk-partnercentralselling>=1<2:devel/rubygem-aws-sdk-partnercentralselling \
		rubygem-aws-sdk-paymentcryptography>=1<2:devel/rubygem-aws-sdk-paymentcryptography \
		rubygem-aws-sdk-paymentcryptographydata>=1<2:devel/rubygem-aws-sdk-paymentcryptographydata \
		rubygem-aws-sdk-pcaconnectorad>=1<2:devel/rubygem-aws-sdk-pcaconnectorad \
		rubygem-aws-sdk-pcaconnectorscep>=1<2:devel/rubygem-aws-sdk-pcaconnectorscep \
		rubygem-aws-sdk-pcs>=1<2:devel/rubygem-aws-sdk-pcs \
		rubygem-aws-sdk-personalize>=1<2:devel/rubygem-aws-sdk-personalize \
		rubygem-aws-sdk-personalizeevents>=1<2:devel/rubygem-aws-sdk-personalizeevents \
		rubygem-aws-sdk-personalizeruntime>=1<2:devel/rubygem-aws-sdk-personalizeruntime \
		rubygem-aws-sdk-pi>=1<2:devel/rubygem-aws-sdk-pi \
		rubygem-aws-sdk-pinpoint>=1<2:devel/rubygem-aws-sdk-pinpoint \
		rubygem-aws-sdk-pinpointemail>=1<2:devel/rubygem-aws-sdk-pinpointemail \
		rubygem-aws-sdk-pinpointsmsvoice>=1<2:devel/rubygem-aws-sdk-pinpointsmsvoice \
		rubygem-aws-sdk-pinpointsmsvoicev2>=1<2:devel/rubygem-aws-sdk-pinpointsmsvoicev2 \
		rubygem-aws-sdk-pipes>=1<2:devel/rubygem-aws-sdk-pipes \
		rubygem-aws-sdk-polly>=1<2:devel/rubygem-aws-sdk-polly \
		rubygem-aws-sdk-pricing>=1<2:devel/rubygem-aws-sdk-pricing \
		rubygem-aws-sdk-prometheusservice>=1<2:devel/rubygem-aws-sdk-prometheusservice \
		rubygem-aws-sdk-proton>=1<2:devel/rubygem-aws-sdk-proton \
		rubygem-aws-sdk-qapps>=1<2:devel/rubygem-aws-sdk-qapps \
		rubygem-aws-sdk-qbusiness>=1<2:devel/rubygem-aws-sdk-qbusiness \
		rubygem-aws-sdk-qconnect>=1<2:devel/rubygem-aws-sdk-qconnect \
		rubygem-aws-sdk-qldb>=1<2:devel/rubygem-aws-sdk-qldb \
		rubygem-aws-sdk-qldbsession>=1<2:devel/rubygem-aws-sdk-qldbsession \
		rubygem-aws-sdk-quicksight>=1<2:devel/rubygem-aws-sdk-quicksight \
		rubygem-aws-sdk-ram>=1<2:devel/rubygem-aws-sdk-ram \
		rubygem-aws-sdk-rds>=1<2:devel/rubygem-aws-sdk-rds \
		rubygem-aws-sdk-rdsdataservice>=1<2:devel/rubygem-aws-sdk-rdsdataservice \
		rubygem-aws-sdk-recyclebin>=1<2:devel/rubygem-aws-sdk-recyclebin \
		rubygem-aws-sdk-redshift>=1<2:devel/rubygem-aws-sdk-redshift \
		rubygem-aws-sdk-redshiftdataapiservice>=1<2:devel/rubygem-aws-sdk-redshiftdataapiservice \
		rubygem-aws-sdk-redshiftserverless>=1<2:devel/rubygem-aws-sdk-redshiftserverless \
		rubygem-aws-sdk-rekognition>=1<2:devel/rubygem-aws-sdk-rekognition \
		rubygem-aws-sdk-repostspace>=1<2:devel/rubygem-aws-sdk-repostspace \
		rubygem-aws-sdk-resiliencehub>=1<2:devel/rubygem-aws-sdk-resiliencehub \
		rubygem-aws-sdk-resourceexplorer2>=1<2:devel/rubygem-aws-sdk-resourceexplorer2 \
		rubygem-aws-sdk-resourcegroups>=1<2:devel/rubygem-aws-sdk-resourcegroups \
		rubygem-aws-sdk-resourcegroupstaggingapi>=1<2:devel/rubygem-aws-sdk-resourcegroupstaggingapi \
		rubygem-aws-sdk-robomaker>=1<2:devel/rubygem-aws-sdk-robomaker \
		rubygem-aws-sdk-rolesanywhere>=1<2:devel/rubygem-aws-sdk-rolesanywhere \
		rubygem-aws-sdk-route53>=1<2:devel/rubygem-aws-sdk-route53 \
		rubygem-aws-sdk-route53domains>=1<2:devel/rubygem-aws-sdk-route53domains \
		rubygem-aws-sdk-route53profiles>=1<2:devel/rubygem-aws-sdk-route53profiles \
		rubygem-aws-sdk-route53recoverycluster>=1<2:devel/rubygem-aws-sdk-route53recoverycluster \
		rubygem-aws-sdk-route53recoverycontrolconfig>=1<2:devel/rubygem-aws-sdk-route53recoverycontrolconfig \
		rubygem-aws-sdk-route53recoveryreadiness>=1<2:devel/rubygem-aws-sdk-route53recoveryreadiness \
		rubygem-aws-sdk-route53resolver>=1<2:devel/rubygem-aws-sdk-route53resolver \
		rubygem-aws-sdk-s3>=1<2:devel/rubygem-aws-sdk-s3 \
		rubygem-aws-sdk-s3control>=1<2:devel/rubygem-aws-sdk-s3control \
		rubygem-aws-sdk-s3outposts>=1<2:devel/rubygem-aws-sdk-s3outposts \
		rubygem-aws-sdk-s3tables>=1<2:devel/rubygem-aws-sdk-s3tables \
		rubygem-aws-sdk-s3vectors>=1<2:devel/rubygem-aws-sdk-s3vectors \
		rubygem-aws-sdk-sagemaker>=1<2:devel/rubygem-aws-sdk-sagemaker \
		rubygem-aws-sdk-sagemakeredgemanager>=1<2:devel/rubygem-aws-sdk-sagemakeredgemanager \
		rubygem-aws-sdk-sagemakerfeaturestoreruntime>=1<2:devel/rubygem-aws-sdk-sagemakerfeaturestoreruntime \
		rubygem-aws-sdk-sagemakergeospatial>=1<2:devel/rubygem-aws-sdk-sagemakergeospatial \
		rubygem-aws-sdk-sagemakermetrics>=1<2:devel/rubygem-aws-sdk-sagemakermetrics \
		rubygem-aws-sdk-sagemakerruntime>=1<2:devel/rubygem-aws-sdk-sagemakerruntime \
		rubygem-aws-sdk-savingsplans>=1<2:devel/rubygem-aws-sdk-savingsplans \
		rubygem-aws-sdk-scheduler>=1<2:devel/rubygem-aws-sdk-scheduler \
		rubygem-aws-sdk-schemas>=1<2:devel/rubygem-aws-sdk-schemas \
		rubygem-aws-sdk-secretsmanager>=1<2:devel/rubygem-aws-sdk-secretsmanager \
		rubygem-aws-sdk-securityhub>=1<2:devel/rubygem-aws-sdk-securityhub \
		rubygem-aws-sdk-securityir>=1<2:devel/rubygem-aws-sdk-securityir \
		rubygem-aws-sdk-securitylake>=1<2:devel/rubygem-aws-sdk-securitylake \
		rubygem-aws-sdk-serverlessapplicationrepository>=1<2:devel/rubygem-aws-sdk-serverlessapplicationrepository \
		rubygem-aws-sdk-servicecatalog>=1<2:devel/rubygem-aws-sdk-servicecatalog \
		rubygem-aws-sdk-servicediscovery>=1<2:devel/rubygem-aws-sdk-servicediscovery \
		rubygem-aws-sdk-servicequotas>=1<2:devel/rubygem-aws-sdk-servicequotas \
		rubygem-aws-sdk-ses>=1<2:devel/rubygem-aws-sdk-ses \
		rubygem-aws-sdk-sesv2>=1<2:devel/rubygem-aws-sdk-sesv2 \
		rubygem-aws-sdk-shield>=1<2:devel/rubygem-aws-sdk-shield \
		rubygem-aws-sdk-signer>=1<2:devel/rubygem-aws-sdk-signer \
		rubygem-aws-sdk-simpledb>=1<2:devel/rubygem-aws-sdk-simpledb \
		rubygem-aws-sdk-simspaceweaver>=1<2:devel/rubygem-aws-sdk-simspaceweaver \
		rubygem-aws-sdk-sms>=1<2:devel/rubygem-aws-sdk-sms \
		rubygem-aws-sdk-snowball>=1<2:devel/rubygem-aws-sdk-snowball \
		rubygem-aws-sdk-snowdevicemanagement>=1<2:devel/rubygem-aws-sdk-snowdevicemanagement \
		rubygem-aws-sdk-sns>=1<2:devel/rubygem-aws-sdk-sns \
		rubygem-aws-sdk-socialmessaging>=1<2:devel/rubygem-aws-sdk-socialmessaging \
		rubygem-aws-sdk-sqs>=1<2:devel/rubygem-aws-sdk-sqs \
		rubygem-aws-sdk-ssm>=1<2:devel/rubygem-aws-sdk-ssm \
		rubygem-aws-sdk-ssmcontacts>=1<2:devel/rubygem-aws-sdk-ssmcontacts \
		rubygem-aws-sdk-ssmguiconnect>=1<2:devel/rubygem-aws-sdk-ssmguiconnect \
		rubygem-aws-sdk-ssmincidents>=1<2:devel/rubygem-aws-sdk-ssmincidents \
		rubygem-aws-sdk-ssmquicksetup>=1<2:devel/rubygem-aws-sdk-ssmquicksetup \
		rubygem-aws-sdk-ssmsap>=1<2:devel/rubygem-aws-sdk-ssmsap \
		rubygem-aws-sdk-ssoadmin>=1<2:devel/rubygem-aws-sdk-ssoadmin \
		rubygem-aws-sdk-states>=1<2:devel/rubygem-aws-sdk-states \
		rubygem-aws-sdk-storagegateway>=1<2:devel/rubygem-aws-sdk-storagegateway \
		rubygem-aws-sdk-supplychain>=1<2:devel/rubygem-aws-sdk-supplychain \
		rubygem-aws-sdk-support>=1<2:devel/rubygem-aws-sdk-support \
		rubygem-aws-sdk-supportapp>=1<2:devel/rubygem-aws-sdk-supportapp \
		rubygem-aws-sdk-swf>=1<2:devel/rubygem-aws-sdk-swf \
		rubygem-aws-sdk-synthetics>=1<2:devel/rubygem-aws-sdk-synthetics \
		rubygem-aws-sdk-taxsettings>=1<2:devel/rubygem-aws-sdk-taxsettings \
		rubygem-aws-sdk-textract>=1<2:devel/rubygem-aws-sdk-textract \
		rubygem-aws-sdk-timestreaminfluxdb>=1<2:devel/rubygem-aws-sdk-timestreaminfluxdb \
		rubygem-aws-sdk-timestreamquery>=1<2:devel/rubygem-aws-sdk-timestreamquery \
		rubygem-aws-sdk-timestreamwrite>=1<2:devel/rubygem-aws-sdk-timestreamwrite \
		rubygem-aws-sdk-tnb>=1<2:devel/rubygem-aws-sdk-tnb \
		rubygem-aws-sdk-transcribeservice>=1<2:devel/rubygem-aws-sdk-transcribeservice \
		rubygem-aws-sdk-transcribestreamingservice>=1<2:devel/rubygem-aws-sdk-transcribestreamingservice \
		rubygem-aws-sdk-transfer>=1<2:devel/rubygem-aws-sdk-transfer \
		rubygem-aws-sdk-translate>=1<2:devel/rubygem-aws-sdk-translate \
		rubygem-aws-sdk-trustedadvisor>=1<2:devel/rubygem-aws-sdk-trustedadvisor \
		rubygem-aws-sdk-verifiedpermissions>=1<2:devel/rubygem-aws-sdk-verifiedpermissions \
		rubygem-aws-sdk-voiceid>=1<2:devel/rubygem-aws-sdk-voiceid \
		rubygem-aws-sdk-vpclattice>=1<2:devel/rubygem-aws-sdk-vpclattice \
		rubygem-aws-sdk-waf>=1<2:devel/rubygem-aws-sdk-waf \
		rubygem-aws-sdk-wafregional>=1<2:devel/rubygem-aws-sdk-wafregional \
		rubygem-aws-sdk-wafv2>=1<2:devel/rubygem-aws-sdk-wafv2 \
		rubygem-aws-sdk-wellarchitected>=1<2:devel/rubygem-aws-sdk-wellarchitected \
		rubygem-aws-sdk-workdocs>=1<2:devel/rubygem-aws-sdk-workdocs \
		rubygem-aws-sdk-workmail>=1<2:devel/rubygem-aws-sdk-workmail \
		rubygem-aws-sdk-workmailmessageflow>=1<2:devel/rubygem-aws-sdk-workmailmessageflow \
		rubygem-aws-sdk-workspaces>=1<2:devel/rubygem-aws-sdk-workspaces \
		rubygem-aws-sdk-workspacesinstances>=1<2:devel/rubygem-aws-sdk-workspacesinstances \
		rubygem-aws-sdk-workspacesthinclient>=1<2:devel/rubygem-aws-sdk-workspacesthinclient \
		rubygem-aws-sdk-workspacesweb>=1<2:devel/rubygem-aws-sdk-workspacesweb \
		rubygem-aws-sdk-xray>=1<2:devel/rubygem-aws-sdk-xray

USES=		gem

NO_ARCH=	yes

PLIST_FILES=	bin/aws-v3.rb

.include <bsd.port.mk>
