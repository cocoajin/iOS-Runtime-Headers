/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDAnimationTargetElement;



@interface PDTimeCondition : NSObject 
{
    BOOL mHasDelay;
    NSInteger mDelay;
    NSInteger mTriggerEvent;
    PDAnimationTargetElement *mTgtElement;
}


- (void)setDelay:(NSInteger)arg1;
- (NSInteger)delay;
- (id)init;
- (void)dealloc;
- (BOOL)hasDelay;
- (NSInteger)triggerEvent;
- (void)setTriggerEvent:(NSInteger)arg1;
- (id)tgtElement;
- (void)setTgtElement:(id)arg1;

@end