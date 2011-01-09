/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray;



@interface GMMDirectionsOptionResponse : PBCodable 
{
    NSMutableArray *_options;
}

@property(readonly) NSInteger optionsCount;
@property(retain) NSMutableArray *options;


- (void)writeTo:(id)arg1;
- (id)options;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (void)setOptions:(id)arg1;
- (NSInteger)optionsCount;
- (void)setOption:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)optionAtIndex:(NSUInteger)arg1;
- (void)addOption:(id)arg1;

@end