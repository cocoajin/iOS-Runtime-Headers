/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */



@interface CABasicAnimation : CAPropertyAnimation 
{
}

@property(readonly) BOOL isCurlAnimation;
@property(readonly) NSInteger direction;
@property BOOL roundsToInteger;
@property float startAngle;
@property float endAngle;
@property(retain) id fromValue;
@property(retain) id toValue;
@property(retain) id byValue;


- (float)startAngle;
- (void)setStartAngle:(float)arg1;
- (void)setFromValue:(id)arg1;
- (void)setToValue:(id)arg1;
- (void)setRoundsToInteger:(BOOL)arg1;
- (id)byValue;
- (void)setByValue:(id)arg1;
- (float)endAngle;
- (BOOL)roundsToInteger;
- (void)setEndAngle:(float)arg1;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (struct Animation { int (**x1)(); struct Atomic { struct { NSInteger x_1_2_1; } x_2_1_1; } x2; float x3; struct Timing {} *x4; struct Vector {} *x5; void *x6; NSUInteger x7; NSUInteger x8; }*)_copyRenderAnimationForLayer:(id)arg1;
- (void)CA_prepareRenderValue;
- (id)fromValue;
- (id)toValue;
- (BOOL)isCurlAnimation;
- (void)reverseValues;
- (NSInteger)direction;

@end