/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */



@interface GMMDateTime : PBCodable 
{
    long long _secsSinceEpoch;
    NSInteger _timeZoneOffsetMin;
    BOOL _hasTimeZoneOffsetMin;
}

@property(readonly) BOOL hasTimeZoneOffsetMin;
@property NSInteger timeZoneOffsetMin;
@property long long secsSinceEpoch;

+ (id)date;

- (void)writeTo:(id)arg1;
- (void)setSecsSinceEpoch:(long long)arg1;
- (void)setTimeZoneOffsetMin:(NSInteger)arg1;
- (long long)secsSinceEpoch;
- (BOOL)hasTimeZoneOffsetMin;
- (NSInteger)timeZoneOffsetMin;
- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (id)calendarDate;

@end