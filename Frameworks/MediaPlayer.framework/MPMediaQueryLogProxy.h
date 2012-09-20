/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, MPMediaQuery, NSMutableArray;

@interface MPMediaQueryLogProxy : NSObject  {
    MPMediaQuery *_target;
    MPMediaQuery *_baseObject;
    NSMutableArray *_loggedInvocations;
    NSString *_filePath;
}


- (void)writeLog;
- (void)createFilePath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)replacementObjectForCoder:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)flushLog;

@end