#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class WayneSQLLeague, WayneRuntimeQuery<__covariant RowType>, WayneSQLMatch, WayneSQLOdd, WayneSQLReqion, WayneSQLSport, WayneDbArgs, WayneDBFileResult, WayneDBFileError, WayneDBFile, WayneDBFileRequestBodyParams, WayneDBFileRequestBody, WayneResult, WayneJSONFile, WayneJSONRequestBody, WayneMatch, WayneLeague, WayneOdd, WayneRegion, WayneSport, WayneRuntimeTransacterTransaction, WayneKotlinByteArray, WayneKotlinArray<T>, WayneKotlinx_serialization_coreSerializersModule, WayneKotlinx_serialization_coreSerialKind, WayneKotlinNothing, WayneKotlinx_serialization_coreUpdateMode, WayneKotlinByteIterator, WayneKotlinEnum<E>;

@protocol WayneLeagueQueries, WayneMatchQueries, WayneOddQueries, WayneRegionQueries, WayneSportQueries, WayneRuntimeTransactionWithoutReturn, WayneRuntimeTransactionWithReturn, WayneRuntimeTransacter, WayneSomeDatabase, WayneRuntimeSqlDriver, WayneRuntimeSqlDriverSchema, WayneKotlinx_serialization_coreKSerializer, WayneRuntimeTransactionCallbacks, WayneRuntimeSqlPreparedStatement, WayneRuntimeSqlCursor, WayneRuntimeCloseable, WayneRuntimeQueryListener, WayneKotlinx_serialization_coreEncoder, WayneKotlinx_serialization_coreSerialDescriptor, WayneKotlinx_serialization_coreSerializationStrategy, WayneKotlinx_serialization_coreDecoder, WayneKotlinx_serialization_coreDeserializationStrategy, WayneKotlinx_serialization_coreCompositeEncoder, WayneKotlinAnnotation, WayneKotlinx_serialization_coreCompositeDecoder, WayneKotlinIterator, WayneKotlinx_serialization_coreSerializersModuleCollector, WayneKotlinKClass, WayneKotlinComparable, WayneKotlinKDeclarationContainer, WayneKotlinKAnnotatedElement, WayneKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface WayneBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface WayneBase (WayneBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface WayneMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface WayneMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorWayneKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface WayneNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface WayneByte : WayneNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface WayneUByte : WayneNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface WayneShort : WayneNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface WayneUShort : WayneNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface WayneInt : WayneNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface WayneUInt : WayneNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface WayneLong : WayneNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface WayneULong : WayneNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface WayneFloat : WayneNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface WayneDouble : WayneNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface WayneBoolean : WayneNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("RuntimeTransacter")))
@protocol WayneRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<WayneRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<WayneRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("SomeDatabase")))
@protocol WayneSomeDatabase <WayneRuntimeTransacter>
@required
@property (readonly) id<WayneLeagueQueries> leagueQueries __attribute__((swift_name("leagueQueries")));
@property (readonly) id<WayneMatchQueries> matchQueries __attribute__((swift_name("matchQueries")));
@property (readonly) id<WayneOddQueries> oddQueries __attribute__((swift_name("oddQueries")));
@property (readonly) id<WayneRegionQueries> regionQueries __attribute__((swift_name("regionQueries")));
@property (readonly) id<WayneSportQueries> sportQueries __attribute__((swift_name("sportQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SomeDatabaseCompanion")))
@interface WayneSomeDatabaseCompanion : WayneBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<WayneSomeDatabase>)invokeDriver:(id<WayneRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<WayneRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((swift_name("LeagueQueries")))
@protocol WayneLeagueQueries <WayneRuntimeTransacter>
@required
- (void)deleteAllItems __attribute__((swift_name("deleteAllItems()")));
- (void)deleteItemLeagueId:(int64_t)leagueId __attribute__((swift_name("deleteItem(leagueId:)")));
- (void)insertSQLLeague:(WayneSQLLeague *)SQLLeague __attribute__((swift_name("insert(SQLLeague:)")));
- (WayneRuntimeQuery<WayneSQLLeague *> *)selectAll __attribute__((swift_name("selectAll()")));
- (WayneRuntimeQuery<id> *)selectAllMapper:(id (^)(WayneLong *, WayneLong *, NSString *, NSString * _Nullable))mapper __attribute__((swift_name("selectAll(mapper:)")));
@end;

__attribute__((swift_name("MatchQueries")))
@protocol WayneMatchQueries <WayneRuntimeTransacter>
@required
- (void)deleteAllItems __attribute__((swift_name("deleteAllItems()")));
- (void)insertSQLMatch:(WayneSQLMatch *)SQLMatch __attribute__((swift_name("insert(SQLMatch:)")));
- (WayneRuntimeQuery<WayneSQLMatch *> *)selectAll __attribute__((swift_name("selectAll()")));
- (WayneRuntimeQuery<id> *)selectAllMapper_:(id (^)(WayneLong *, WayneLong *, NSString *, NSString *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, WayneLong *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, WayneLong *))mapper __attribute__((swift_name("selectAll(mapper_:)")));
@end;

__attribute__((swift_name("OddQueries")))
@protocol WayneOddQueries <WayneRuntimeTransacter>
@required
- (void)deleteAllItems __attribute__((swift_name("deleteAllItems()")));
- (void)deleteItemTipId:(int64_t)tipId __attribute__((swift_name("deleteItem(tipId:)")));
- (void)insertSQLOdd:(WayneSQLOdd *)SQLOdd __attribute__((swift_name("insert(SQLOdd:)")));
- (WayneRuntimeQuery<WayneSQLOdd *> *)selectAll __attribute__((swift_name("selectAll()")));
- (WayneRuntimeQuery<id> *)selectAllMapper__:(id (^)(WayneLong *, NSString * _Nullable, NSString * _Nullable, WayneDouble *, WayneDouble *, WayneLong *, WayneLong *, WayneBoolean * _Nullable))mapper __attribute__((swift_name("selectAll(mapper__:)")));
@end;

__attribute__((swift_name("RegionQueries")))
@protocol WayneRegionQueries <WayneRuntimeTransacter>
@required
- (void)deleteAllItems __attribute__((swift_name("deleteAllItems()")));
- (void)deleteItemIdOpptyRegion:(int64_t)idOpptyRegion __attribute__((swift_name("deleteItem(idOpptyRegion:)")));
- (void)insertSQLReqion:(WayneSQLReqion *)SQLReqion __attribute__((swift_name("insert(SQLReqion:)")));
- (WayneRuntimeQuery<WayneSQLReqion *> *)selectAll __attribute__((swift_name("selectAll()")));
- (WayneRuntimeQuery<id> *)selectAllMapper___:(id (^)(WayneLong *, WayneLong *, NSString *, NSString *, WayneLong *))mapper __attribute__((swift_name("selectAll(mapper___:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SQLLeague")))
@interface WayneSQLLeague : WayneBase
- (instancetype)initWithParentRegionId:(int64_t)parentRegionId leagueId:(int64_t)leagueId leagueName:(NSString *)leagueName eventNote:(NSString * _Nullable)eventNote __attribute__((swift_name("init(parentRegionId:leagueId:leagueName:eventNote:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (WayneSQLLeague *)doCopyParentRegionId:(int64_t)parentRegionId leagueId:(int64_t)leagueId leagueName:(NSString *)leagueName eventNote:(NSString * _Nullable)eventNote __attribute__((swift_name("doCopy(parentRegionId:leagueId:leagueName:eventNote:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable eventNote __attribute__((swift_name("eventNote")));
@property (readonly) int64_t leagueId __attribute__((swift_name("leagueId")));
@property (readonly) NSString *leagueName __attribute__((swift_name("leagueName")));
@property (readonly) int64_t parentRegionId __attribute__((swift_name("parentRegionId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SQLMatch")))
@interface WayneSQLMatch : WayneBase
- (instancetype)initWithParentLeagueId:(int64_t)parentLeagueId optyInfoNumber:(int64_t)optyInfoNumber optyEndDateFormat:(NSString *)optyEndDateFormat optyEndTimeFormat:(NSString *)optyEndTimeFormat teamName1:(NSString * _Nullable)teamName1 teamName2:(NSString * _Nullable)teamName2 optyName:(NSString * _Nullable)optyName opportunityId:(int64_t)opportunityId opptyEndDate:(NSString * _Nullable)opptyEndDate opptyEndTime:(NSString * _Nullable)opptyEndTime opptyNote:(NSString * _Nullable)opptyNote opptyTypeName:(NSString * _Nullable)opptyTypeName opptyTreeTypeId:(int64_t)opptyTreeTypeId __attribute__((swift_name("init(parentLeagueId:optyInfoNumber:optyEndDateFormat:optyEndTimeFormat:teamName1:teamName2:optyName:opportunityId:opptyEndDate:opptyEndTime:opptyNote:opptyTypeName:opptyTreeTypeId:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (int64_t)component13 __attribute__((swift_name("component13()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (int64_t)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (WayneSQLMatch *)doCopyParentLeagueId:(int64_t)parentLeagueId optyInfoNumber:(int64_t)optyInfoNumber optyEndDateFormat:(NSString *)optyEndDateFormat optyEndTimeFormat:(NSString *)optyEndTimeFormat teamName1:(NSString * _Nullable)teamName1 teamName2:(NSString * _Nullable)teamName2 optyName:(NSString * _Nullable)optyName opportunityId:(int64_t)opportunityId opptyEndDate:(NSString * _Nullable)opptyEndDate opptyEndTime:(NSString * _Nullable)opptyEndTime opptyNote:(NSString * _Nullable)opptyNote opptyTypeName:(NSString * _Nullable)opptyTypeName opptyTreeTypeId:(int64_t)opptyTreeTypeId __attribute__((swift_name("doCopy(parentLeagueId:optyInfoNumber:optyEndDateFormat:optyEndTimeFormat:teamName1:teamName2:optyName:opportunityId:opptyEndDate:opptyEndTime:opptyNote:opptyTypeName:opptyTreeTypeId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t opportunityId __attribute__((swift_name("opportunityId")));
@property (readonly) NSString * _Nullable opptyEndDate __attribute__((swift_name("opptyEndDate")));
@property (readonly) NSString * _Nullable opptyEndTime __attribute__((swift_name("opptyEndTime")));
@property (readonly) NSString * _Nullable opptyNote __attribute__((swift_name("opptyNote")));
@property (readonly) int64_t opptyTreeTypeId __attribute__((swift_name("opptyTreeTypeId")));
@property (readonly) NSString * _Nullable opptyTypeName __attribute__((swift_name("opptyTypeName")));
@property (readonly) NSString *optyEndDateFormat __attribute__((swift_name("optyEndDateFormat")));
@property (readonly) NSString *optyEndTimeFormat __attribute__((swift_name("optyEndTimeFormat")));
@property (readonly) int64_t optyInfoNumber __attribute__((swift_name("optyInfoNumber")));
@property (readonly) NSString * _Nullable optyName __attribute__((swift_name("optyName")));
@property (readonly) int64_t parentLeagueId __attribute__((swift_name("parentLeagueId")));
@property (readonly) NSString * _Nullable teamName1 __attribute__((swift_name("teamName1")));
@property (readonly) NSString * _Nullable teamName2 __attribute__((swift_name("teamName2")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SQLOdd")))
@interface WayneSQLOdd : WayneBase
- (instancetype)initWithParentMatchId:(int64_t)parentMatchId tipName:(NSString * _Nullable)tipName tipShortname:(NSString * _Nullable)tipShortname oddsValue:(double)oddsValue oddsValueNumber:(double)oddsValueNumber oddsId:(int64_t)oddsId tipId:(int64_t)tipId inTicket:(WayneBoolean * _Nullable)inTicket __attribute__((swift_name("init(parentMatchId:tipName:tipShortname:oddsValue:oddsValueNumber:oddsId:tipId:inTicket:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (double)component5 __attribute__((swift_name("component5()")));
- (int64_t)component6 __attribute__((swift_name("component6()")));
- (int64_t)component7 __attribute__((swift_name("component7()")));
- (WayneBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (WayneSQLOdd *)doCopyParentMatchId:(int64_t)parentMatchId tipName:(NSString * _Nullable)tipName tipShortname:(NSString * _Nullable)tipShortname oddsValue:(double)oddsValue oddsValueNumber:(double)oddsValueNumber oddsId:(int64_t)oddsId tipId:(int64_t)tipId inTicket:(WayneBoolean * _Nullable)inTicket __attribute__((swift_name("doCopy(parentMatchId:tipName:tipShortname:oddsValue:oddsValueNumber:oddsId:tipId:inTicket:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) WayneBoolean * _Nullable inTicket __attribute__((swift_name("inTicket")));
@property (readonly) int64_t oddsId __attribute__((swift_name("oddsId")));
@property (readonly) double oddsValue __attribute__((swift_name("oddsValue")));
@property (readonly) double oddsValueNumber __attribute__((swift_name("oddsValueNumber")));
@property (readonly) int64_t parentMatchId __attribute__((swift_name("parentMatchId")));
@property (readonly) int64_t tipId __attribute__((swift_name("tipId")));
@property (readonly) NSString * _Nullable tipName __attribute__((swift_name("tipName")));
@property (readonly) NSString * _Nullable tipShortname __attribute__((swift_name("tipShortname")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SQLReqion")))
@interface WayneSQLReqion : WayneBase
- (instancetype)initWithParentSportId:(int64_t)parentSportId idOpptyRegion:(int64_t)idOpptyRegion opptyRegionName:(NSString *)opptyRegionName opttyRegionCode:(NSString *)opttyRegionCode regionOrder:(int64_t)regionOrder __attribute__((swift_name("init(parentSportId:idOpptyRegion:opptyRegionName:opttyRegionCode:regionOrder:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (int64_t)component5 __attribute__((swift_name("component5()")));
- (WayneSQLReqion *)doCopyParentSportId:(int64_t)parentSportId idOpptyRegion:(int64_t)idOpptyRegion opptyRegionName:(NSString *)opptyRegionName opttyRegionCode:(NSString *)opttyRegionCode regionOrder:(int64_t)regionOrder __attribute__((swift_name("doCopy(parentSportId:idOpptyRegion:opptyRegionName:opttyRegionCode:regionOrder:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t idOpptyRegion __attribute__((swift_name("idOpptyRegion")));
@property (readonly) NSString *opptyRegionName __attribute__((swift_name("opptyRegionName")));
@property (readonly) NSString *opttyRegionCode __attribute__((swift_name("opttyRegionCode")));
@property (readonly) int64_t parentSportId __attribute__((swift_name("parentSportId")));
@property (readonly) int64_t regionOrder __attribute__((swift_name("regionOrder")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SQLSport")))
@interface WayneSQLSport : WayneBase
- (instancetype)initWithIdSport:(int64_t)idSport sportName:(NSString *)sportName sportCode:(NSString *)sportCode sportOrder:(int64_t)sportOrder __attribute__((swift_name("init(idSport:sportName:sportCode:sportOrder:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (int64_t)component4 __attribute__((swift_name("component4()")));
- (WayneSQLSport *)doCopyIdSport:(int64_t)idSport sportName:(NSString *)sportName sportCode:(NSString *)sportCode sportOrder:(int64_t)sportOrder __attribute__((swift_name("doCopy(idSport:sportName:sportCode:sportOrder:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t idSport __attribute__((swift_name("idSport")));
@property (readonly) NSString *sportCode __attribute__((swift_name("sportCode")));
@property (readonly) NSString *sportName __attribute__((swift_name("sportName")));
@property (readonly) int64_t sportOrder __attribute__((swift_name("sportOrder")));
@end;

__attribute__((swift_name("SportQueries")))
@protocol WayneSportQueries <WayneRuntimeTransacter>
@required
- (void)deleteAllItems __attribute__((swift_name("deleteAllItems()")));
- (void)deleteItemIdSport:(int64_t)idSport __attribute__((swift_name("deleteItem(idSport:)")));
- (void)insertSQLSport:(WayneSQLSport *)SQLSport __attribute__((swift_name("insert(SQLSport:)")));
- (WayneRuntimeQuery<WayneSQLSport *> *)selectAll __attribute__((swift_name("selectAll()")));
- (WayneRuntimeQuery<id> *)selectAllMapper____:(id (^)(WayneLong *, NSString *, NSString *, WayneLong *))mapper __attribute__((swift_name("selectAll(mapper____:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseCreator")))
@interface WayneDatabaseCreator : WayneBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)databaseCreator __attribute__((swift_name("init()")));
- (id<WayneSomeDatabase> _Nullable)getDataBaseDbArgs:(WayneDbArgs *)dbArgs __attribute__((swift_name("getDataBase(dbArgs:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Logger")))
@interface WayneLogger : WayneBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)enable __attribute__((swift_name("enable()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedCodeEntryPoint")))
@interface WayneSharedCodeEntryPoint : WayneBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)getUUID __attribute__((swift_name("getUUID()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UUIDGenerator")))
@interface WayneUUIDGenerator : WayneBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)uUIDGenerator __attribute__((swift_name("init()")));
- (NSString *)getUUID __attribute__((swift_name("getUUID()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DbArgs")))
@interface WayneDbArgs : WayneBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DBFile")))
@interface WayneDBFile : WayneBase
- (instancetype)initWithId:(WayneInt * _Nullable)id session:(NSString * _Nullable)session ip:(NSString * _Nullable)ip version:(NSString * _Nullable)version result:(WayneDBFileResult * _Nullable)result error:(WayneDBFileError * _Nullable)error __attribute__((swift_name("init(id:session:ip:version:result:error:)"))) __attribute__((objc_designated_initializer));
- (WayneInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (WayneDBFileResult * _Nullable)component5 __attribute__((swift_name("component5()")));
- (WayneDBFileError * _Nullable)component6 __attribute__((swift_name("component6()")));
- (WayneDBFile *)doCopyId:(WayneInt * _Nullable)id session:(NSString * _Nullable)session ip:(NSString * _Nullable)ip version:(NSString * _Nullable)version result:(WayneDBFileResult * _Nullable)result error:(WayneDBFileError * _Nullable)error __attribute__((swift_name("doCopy(id:session:ip:version:result:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) WayneDBFileError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) WayneInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable ip __attribute__((swift_name("ip")));
@property (readonly) WayneDBFileResult * _Nullable result __attribute__((swift_name("result")));
@property (readonly) NSString * _Nullable session __attribute__((swift_name("session")));
@property (readonly) NSString * _Nullable version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DBFile.Companion")))
@interface WayneDBFileCompanion : WayneBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<WayneKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DBFileError")))
@interface WayneDBFileError : WayneBase
- (instancetype)initWithCode:(NSString *)code message:(NSString *)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (WayneDBFileError *)doCopyCode:(NSString *)code message:(NSString *)message __attribute__((swift_name("doCopy(code:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DBFileError.Companion")))
@interface WayneDBFileErrorCompanion : WayneBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<WayneKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DBFileRequestBody")))
@interface WayneDBFileRequestBody : WayneBase
- (instancetype)initWithAppId:(NSString *)appId id:(int32_t)id jsonrpc:(float)jsonrpc lang:(NSString *)lang method:(NSString *)method params:(WayneDBFileRequestBodyParams *)params session:(NSString *)session stationName:(NSString *)stationName __attribute__((swift_name("init(appId:id:jsonrpc:lang:method:params:session:stationName:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (float)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (WayneDBFileRequestBodyParams *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (WayneDBFileRequestBody *)doCopyAppId:(NSString *)appId id:(int32_t)id jsonrpc:(float)jsonrpc lang:(NSString *)lang method:(NSString *)method params:(WayneDBFileRequestBodyParams *)params session:(NSString *)session stationName:(NSString *)stationName __attribute__((swift_name("doCopy(appId:id:jsonrpc:lang:method:params:session:stationName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *appId __attribute__((swift_name("appId")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) float jsonrpc __attribute__((swift_name("jsonrpc")));
@property (readonly) NSString *lang __attribute__((swift_name("lang")));
@property (readonly) NSString *method __attribute__((swift_name("method")));
@property (readonly) WayneDBFileRequestBodyParams *params __attribute__((swift_name("params")));
@property (readonly) NSString *session __attribute__((swift_name("session")));
@property (readonly) NSString *stationName __attribute__((swift_name("stationName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DBFileRequestBody.Companion")))
@interface WayneDBFileRequestBodyCompanion : WayneBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<WayneKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DBFileRequestBodyParams")))
@interface WayneDBFileRequestBodyParams : WayneBase
- (instancetype)initWithOs:(NSString *)os version:(NSString *)version __attribute__((swift_name("init(os:version:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (WayneDBFileRequestBodyParams *)doCopyOs:(NSString *)os version:(NSString *)version __attribute__((swift_name("doCopy(os:version:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *os __attribute__((swift_name("os")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DBFileRequestBodyParams.Companion")))
@interface WayneDBFileRequestBodyParamsCompanion : WayneBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<WayneKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DBFileResult")))
@interface WayneDBFileResult : WayneBase
- (instancetype)initWithData:(NSString *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (WayneDBFileResult *)doCopyData:(NSString *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DBFileResult.Companion")))
@interface WayneDBFileResultCompanion : WayneBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<WayneKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JSONFile")))
@interface WayneJSONFile : WayneBase
- (instancetype)initWithJsonrpc:(float)jsonrpc result:(WayneResult *)result __attribute__((swift_name("init(jsonrpc:result:)"))) __attribute__((objc_designated_initializer));
- (float)component1 __attribute__((swift_name("component1()")));
- (WayneResult *)component2 __attribute__((swift_name("component2()")));
- (WayneJSONFile *)doCopyJsonrpc:(float)jsonrpc result:(WayneResult *)result __attribute__((swift_name("doCopy(jsonrpc:result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float jsonrpc __attribute__((swift_name("jsonrpc")));
@property (readonly) WayneResult *result __attribute__((swift_name("result")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JSONFile.Companion")))
@interface WayneJSONFileCompanion : WayneBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<WayneKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JSONRequestBody")))
@interface WayneJSONRequestBody : WayneBase
- (instancetype)initWithAppId:(NSString *)appId id:(int32_t)id jsonrpc:(float)jsonrpc lang:(NSString *)lang method:(NSString *)method params:(WayneDBFileRequestBodyParams *)params session:(NSString *)session stationName:(NSString *)stationName __attribute__((swift_name("init(appId:id:jsonrpc:lang:method:params:session:stationName:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (float)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (WayneDBFileRequestBodyParams *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (WayneJSONRequestBody *)doCopyAppId:(NSString *)appId id:(int32_t)id jsonrpc:(float)jsonrpc lang:(NSString *)lang method:(NSString *)method params:(WayneDBFileRequestBodyParams *)params session:(NSString *)session stationName:(NSString *)stationName __attribute__((swift_name("doCopy(appId:id:jsonrpc:lang:method:params:session:stationName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *appId __attribute__((swift_name("appId")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) float jsonrpc __attribute__((swift_name("jsonrpc")));
@property (readonly) NSString *lang __attribute__((swift_name("lang")));
@property (readonly) NSString *method __attribute__((swift_name("method")));
@property (readonly) WayneDBFileRequestBodyParams *params __attribute__((swift_name("params")));
@property (readonly) NSString *session __attribute__((swift_name("session")));
@property (readonly) NSString *stationName __attribute__((swift_name("stationName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JSONRequestBody.Companion")))
@interface WayneJSONRequestBodyCompanion : WayneBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<WayneKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("League")))
@interface WayneLeague : WayneBase
- (instancetype)initWithLeagueId:(int32_t)leagueId leagueName:(NSString *)leagueName eventNote:(NSString * _Nullable)eventNote matches:(NSArray<WayneMatch *> *)matches __attribute__((swift_name("init(leagueId:leagueName:eventNote:matches:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<WayneMatch *> *)component4 __attribute__((swift_name("component4()")));
- (WayneLeague *)doCopyLeagueId:(int32_t)leagueId leagueName:(NSString *)leagueName eventNote:(NSString * _Nullable)eventNote matches:(NSArray<WayneMatch *> *)matches __attribute__((swift_name("doCopy(leagueId:leagueName:eventNote:matches:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable eventNote __attribute__((swift_name("eventNote")));
@property (readonly) int32_t leagueId __attribute__((swift_name("leagueId")));
@property (readonly) NSString *leagueName __attribute__((swift_name("leagueName")));
@property (readonly) NSArray<WayneMatch *> *matches __attribute__((swift_name("matches")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("League.Companion")))
@interface WayneLeagueCompanion : WayneBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<WayneKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Match")))
@interface WayneMatch : WayneBase
- (instancetype)initWithOptyInfoNumber:(int32_t)optyInfoNumber optyEndDateFormat:(NSString * _Nullable)optyEndDateFormat optyEndTimeFormat:(NSString *)optyEndTimeFormat teamName1:(NSString * _Nullable)teamName1 teamName2:(NSString * _Nullable)teamName2 optyName:(NSString * _Nullable)optyName opportunityId:(int32_t)opportunityId opptyEndDate:(NSString * _Nullable)opptyEndDate opptyEndTime:(NSString * _Nullable)opptyEndTime opptyNote:(NSString * _Nullable)opptyNote opptyTypeName:(NSString * _Nullable)opptyTypeName opptyTreeTypeId:(int32_t)opptyTreeTypeId odds:(NSArray<WayneOdd *> *)odds __attribute__((swift_name("init(optyInfoNumber:optyEndDateFormat:optyEndTimeFormat:teamName1:teamName2:optyName:opportunityId:opptyEndDate:opptyEndTime:opptyNote:opptyTypeName:opptyTreeTypeId:odds:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (int32_t)component12 __attribute__((swift_name("component12()")));
- (NSArray<WayneOdd *> *)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (int32_t)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (WayneMatch *)doCopyOptyInfoNumber:(int32_t)optyInfoNumber optyEndDateFormat:(NSString * _Nullable)optyEndDateFormat optyEndTimeFormat:(NSString *)optyEndTimeFormat teamName1:(NSString * _Nullable)teamName1 teamName2:(NSString * _Nullable)teamName2 optyName:(NSString * _Nullable)optyName opportunityId:(int32_t)opportunityId opptyEndDate:(NSString * _Nullable)opptyEndDate opptyEndTime:(NSString * _Nullable)opptyEndTime opptyNote:(NSString * _Nullable)opptyNote opptyTypeName:(NSString * _Nullable)opptyTypeName opptyTreeTypeId:(int32_t)opptyTreeTypeId odds:(NSArray<WayneOdd *> *)odds __attribute__((swift_name("doCopy(optyInfoNumber:optyEndDateFormat:optyEndTimeFormat:teamName1:teamName2:optyName:opportunityId:opptyEndDate:opptyEndTime:opptyNote:opptyTypeName:opptyTreeTypeId:odds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<WayneOdd *> *odds __attribute__((swift_name("odds")));
@property (readonly) int32_t opportunityId __attribute__((swift_name("opportunityId")));
@property (readonly) NSString * _Nullable opptyEndDate __attribute__((swift_name("opptyEndDate")));
@property (readonly) NSString * _Nullable opptyEndTime __attribute__((swift_name("opptyEndTime")));
@property (readonly) NSString * _Nullable opptyNote __attribute__((swift_name("opptyNote")));
@property (readonly) int32_t opptyTreeTypeId __attribute__((swift_name("opptyTreeTypeId")));
@property (readonly) NSString * _Nullable opptyTypeName __attribute__((swift_name("opptyTypeName")));
@property (readonly) NSString * _Nullable optyEndDateFormat __attribute__((swift_name("optyEndDateFormat")));
@property (readonly) NSString *optyEndTimeFormat __attribute__((swift_name("optyEndTimeFormat")));
@property (readonly) int32_t optyInfoNumber __attribute__((swift_name("optyInfoNumber")));
@property (readonly) NSString * _Nullable optyName __attribute__((swift_name("optyName")));
@property (readonly) NSString * _Nullable teamName1 __attribute__((swift_name("teamName1")));
@property (readonly) NSString * _Nullable teamName2 __attribute__((swift_name("teamName2")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Match.Companion")))
@interface WayneMatchCompanion : WayneBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<WayneKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Odd")))
@interface WayneOdd : WayneBase
- (instancetype)initWithTipName:(NSString * _Nullable)tipName tipShortname:(NSString * _Nullable)tipShortname oddsValue:(float)oddsValue oddsValueNumber:(float)oddsValueNumber oddsId:(int32_t)oddsId tipId:(int32_t)tipId inTicket:(BOOL)inTicket __attribute__((swift_name("init(tipName:tipShortname:oddsValue:oddsValueNumber:oddsId:tipId:inTicket:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (float)component3 __attribute__((swift_name("component3()")));
- (float)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (BOOL)component7 __attribute__((swift_name("component7()")));
- (WayneOdd *)doCopyTipName:(NSString * _Nullable)tipName tipShortname:(NSString * _Nullable)tipShortname oddsValue:(float)oddsValue oddsValueNumber:(float)oddsValueNumber oddsId:(int32_t)oddsId tipId:(int32_t)tipId inTicket:(BOOL)inTicket __attribute__((swift_name("doCopy(tipName:tipShortname:oddsValue:oddsValueNumber:oddsId:tipId:inTicket:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL inTicket __attribute__((swift_name("inTicket")));
@property (readonly) int32_t oddsId __attribute__((swift_name("oddsId")));
@property (readonly) float oddsValue __attribute__((swift_name("oddsValue")));
@property (readonly) float oddsValueNumber __attribute__((swift_name("oddsValueNumber")));
@property (readonly) int32_t tipId __attribute__((swift_name("tipId")));
@property (readonly) NSString * _Nullable tipName __attribute__((swift_name("tipName")));
@property (readonly) NSString * _Nullable tipShortname __attribute__((swift_name("tipShortname")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Odd.Companion")))
@interface WayneOddCompanion : WayneBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<WayneKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Region")))
@interface WayneRegion : WayneBase
- (instancetype)initWithIdOpptyRegion:(int32_t)idOpptyRegion opptyRegionName:(NSString *)opptyRegionName opttyRegionCode:(NSString * _Nullable)opttyRegionCode regionOrder:(int32_t)regionOrder leagues:(NSArray<WayneLeague *> *)leagues __attribute__((swift_name("init(idOpptyRegion:opptyRegionName:opttyRegionCode:regionOrder:leagues:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (NSArray<WayneLeague *> *)component5 __attribute__((swift_name("component5()")));
- (WayneRegion *)doCopyIdOpptyRegion:(int32_t)idOpptyRegion opptyRegionName:(NSString *)opptyRegionName opttyRegionCode:(NSString * _Nullable)opttyRegionCode regionOrder:(int32_t)regionOrder leagues:(NSArray<WayneLeague *> *)leagues __attribute__((swift_name("doCopy(idOpptyRegion:opptyRegionName:opttyRegionCode:regionOrder:leagues:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t idOpptyRegion __attribute__((swift_name("idOpptyRegion")));
@property (readonly) NSArray<WayneLeague *> *leagues __attribute__((swift_name("leagues")));
@property (readonly) NSString *opptyRegionName __attribute__((swift_name("opptyRegionName")));
@property (readonly) NSString * _Nullable opttyRegionCode __attribute__((swift_name("opttyRegionCode")));
@property (readonly) int32_t regionOrder __attribute__((swift_name("regionOrder")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Region.Companion")))
@interface WayneRegionCompanion : WayneBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<WayneKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Result")))
@interface WayneResult : WayneBase
- (instancetype)initWithSports:(NSArray<WayneSport *> *)sports __attribute__((swift_name("init(sports:)"))) __attribute__((objc_designated_initializer));
- (NSArray<WayneSport *> *)component1 __attribute__((swift_name("component1()")));
- (WayneResult *)doCopySports:(NSArray<WayneSport *> *)sports __attribute__((swift_name("doCopy(sports:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<WayneSport *> *sports __attribute__((swift_name("sports")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Result.Companion")))
@interface WayneResultCompanion : WayneBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<WayneKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sport")))
@interface WayneSport : WayneBase
- (instancetype)initWithIdSport:(int32_t)idSport sportName:(NSString *)sportName sportCode:(NSString *)sportCode sportOrder:(int32_t)sportOrder regions:(NSArray<WayneRegion *> *)regions __attribute__((swift_name("init(idSport:sportName:sportCode:sportOrder:regions:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (NSArray<WayneRegion *> *)component5 __attribute__((swift_name("component5()")));
- (WayneSport *)doCopyIdSport:(int32_t)idSport sportName:(NSString *)sportName sportCode:(NSString *)sportCode sportOrder:(int32_t)sportOrder regions:(NSArray<WayneRegion *> *)regions __attribute__((swift_name("doCopy(idSport:sportName:sportCode:sportOrder:regions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t idSport __attribute__((swift_name("idSport")));
@property (readonly) NSArray<WayneRegion *> *regions __attribute__((swift_name("regions")));
@property (readonly) NSString *sportCode __attribute__((swift_name("sportCode")));
@property (readonly) NSString *sportName __attribute__((swift_name("sportName")));
@property (readonly) int32_t sportOrder __attribute__((swift_name("sportOrder")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sport.Companion")))
@interface WayneSportCompanion : WayneBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<WayneKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

@interface WayneLeague (Extensions)
- (WayneSQLLeague *)toSQLItemParentRegionId:(int32_t)parentRegionId __attribute__((swift_name("toSQLItem(parentRegionId:)")));
@end;

@interface WayneMatch (Extensions)
- (WayneSQLMatch *)toSQLItemLeague:(int32_t)league __attribute__((swift_name("toSQLItem(league:)")));
@end;

@interface WayneOdd (Extensions)
- (WayneSQLOdd *)toSQLItemParentMatchId:(int32_t)parentMatchId __attribute__((swift_name("toSQLItem(parentMatchId:)")));
@end;

@interface WayneRegion (Extensions)
- (WayneSQLReqion *)toSQLItemParentSportId:(int32_t)parentSportId __attribute__((swift_name("toSQLItem(parentSportId:)")));
@end;

@interface WayneSport (Extensions)
- (WayneSQLSport *)toSQLItem __attribute__((swift_name("toSQLItem()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DbArgsKt")))
@interface WayneDbArgsKt : WayneBase
+ (id<WayneRuntimeSqlDriver>)getSqlDriverDbArgs:(WayneDbArgs *)dbArgs __attribute__((swift_name("getSqlDriver(dbArgs:)")));
@end;

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol WayneRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol WayneRuntimeTransactionWithoutReturn <WayneRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<WayneRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol WayneRuntimeTransactionWithReturn <WayneRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<WayneRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end;

__attribute__((swift_name("RuntimeCloseable")))
@protocol WayneRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol WayneRuntimeSqlDriver <WayneRuntimeCloseable>
@required
- (WayneRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(WayneInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<WayneRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<WayneRuntimeSqlCursor>)executeQueryIdentifier:(WayneInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<WayneRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (WayneRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol WayneRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<WayneRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<WayneRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("RuntimeQuery")))
@interface WayneRuntimeQuery<__covariant RowType> : WayneBase
- (instancetype)initWithQueries:(NSMutableArray<WayneRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<WayneRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<WayneRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<WayneRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<WayneRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<WayneRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol WayneKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<WayneKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<WayneKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol WayneKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<WayneKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<WayneKotlinx_serialization_coreDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)"))) __attribute__((unavailable("Patch function is deprecated for removal since this functionality is no longer supported by serializer.Some formats may provide implementation-specific patching in their Decoders.")));
@property (readonly) id<WayneKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol WayneKotlinx_serialization_coreKSerializer <WayneKotlinx_serialization_coreSerializationStrategy, WayneKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface WayneRuntimeTransacterTransaction : WayneBase <WayneRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) WayneRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol WayneRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index bytes:(WayneKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(WayneDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(WayneLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end;

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol WayneRuntimeSqlCursor <WayneRuntimeCloseable>
@required
- (WayneKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (WayneDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (WayneLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("RuntimeQueryListener")))
@protocol WayneRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol WayneKotlinx_serialization_coreEncoder
@required
- (id<WayneKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<WayneKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize typeSerializers:(WayneKotlinArray<id<WayneKotlinx_serialization_coreKSerializer>> *)typeSerializers __attribute__((swift_name("beginCollection(descriptor:collectionSize:typeSerializers:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginCollection method with two arguments.")));
- (id<WayneKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (id<WayneKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor typeSerializers:(WayneKotlinArray<id<WayneKotlinx_serialization_coreKSerializer>> *)typeSerializers __attribute__((swift_name("beginStructure(descriptor:typeSerializers:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginStructure method with one argument.")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<WayneKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<WayneKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) WayneKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol WayneKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<WayneKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<WayneKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<WayneKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) WayneKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol WayneKotlinx_serialization_coreDecoder
@required
- (id<WayneKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (id<WayneKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor typeParams:(WayneKotlinArray<id<WayneKotlinx_serialization_coreKSerializer>> *)typeParams __attribute__((swift_name("beginStructure(descriptor:typeParams:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginStructure method with one argument.")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (WayneKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<WayneKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<WayneKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<WayneKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Updating elements that are outside of structure is an unsupported operation.")));
- (id _Nullable)updateSerializableValueDeserializer:(id<WayneKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Updating elements that are outside of structure is an unsupported operation.")));
@property (readonly) WayneKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@property (readonly) WayneKotlinx_serialization_coreUpdateMode *updateMode __attribute__((swift_name("updateMode"))) __attribute__((unavailable("Update mode in Decoder is deprecated for removal. Update behaviour is now considered an implementation detail of the format that should not concern serializer.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface WayneKotlinByteArray : WayneBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(WayneByte *(^)(WayneInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (WayneKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol WayneKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (void)encodeIntElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNonSerializableElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(descriptor:index:value:)"))) __attribute__((unavailable("This method is deprecated for removal. Please remove it from your implementation and delegate to default method instead")));
- (void)encodeNullableSerializableElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<WayneKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<WayneKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) WayneKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface WayneKotlinArray<T> : WayneBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(WayneInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<WayneKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface WayneKotlinx_serialization_coreSerializersModule : WayneBase
- (void)dumpToCollector:(id<WayneKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<WayneKotlinx_serialization_coreKSerializer> _Nullable)getContextualKclass:(id<WayneKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<WayneKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<WayneKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<WayneKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<WayneKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol WayneKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface WayneKotlinx_serialization_coreSerialKind : WayneBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol WayneKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor i:(int32_t)i deserializer:(id<WayneKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(descriptor:i:deserializer:)"))) __attribute__((unavailable("Please migrate to decodeElement method which accepts old value.Feel free to ignore it if your format does not support updates.")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<WayneKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor i:(int32_t)i deserializer:(id<WayneKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(descriptor:i:deserializer:)"))) __attribute__((unavailable("Please migrate to decodeElement method which accepts old value.Feel free to ignore it if your format does not support updates.")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<WayneKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (id _Nullable)updateNullableSerializableElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<WayneKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(descriptor:index:deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Pass the old value to decodeSerializable*, so formats that support update could use it.")));
- (id _Nullable)updateSerializableElementDescriptor:(id<WayneKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<WayneKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(descriptor:index:deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Pass the old value to decodeSerializable*, so formats that support update could use it.")));
@property (readonly) WayneKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@property (readonly) WayneKotlinx_serialization_coreUpdateMode *updateMode __attribute__((swift_name("updateMode"))) __attribute__((unavailable("Update mode in Decoder is deprecated for removal. Update behaviour is now considered an implementation detail of the format that should not concern serializer.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface WayneKotlinNothing : WayneBase
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol WayneKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface WayneKotlinEnum<E> : WayneBase <WayneKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreUpdateMode")))
@interface WayneKotlinx_serialization_coreUpdateMode : WayneKotlinEnum<WayneKotlinx_serialization_coreUpdateMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) WayneKotlinx_serialization_coreUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) WayneKotlinx_serialization_coreUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) WayneKotlinx_serialization_coreUpdateMode *update __attribute__((swift_name("update")));
+ (WayneKotlinArray<WayneKotlinx_serialization_coreUpdateMode *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol WayneKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface WayneKotlinByteIterator : WayneBase <WayneKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (WayneByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol WayneKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<WayneKotlinKClass>)kClass serializer:(id<WayneKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<WayneKotlinKClass>)baseClass actualClass:(id<WayneKotlinKClass>)actualClass actualSerializer:(id<WayneKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<WayneKotlinKClass>)baseClass defaultSerializerProvider:(id<WayneKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol WayneKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol WayneKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol WayneKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol WayneKotlinKClass <WayneKotlinKDeclarationContainer, WayneKotlinKAnnotatedElement, WayneKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
