/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */



@interface PTPTransport : NSObject 
{
    unsigned short _transportType;
    NSInteger _role;
    NSInteger _connectionStatus;
    id _delegate;
    BOOL _timedOut;
    BOOL _responseReceived;
}


- (unsigned short)transportType;
- (BOOL)sendEvent:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (BOOL)sendData:(id)arg1;
- (BOOL)connected;
- (void)cancelTransaction:(id)arg1;
- (unsigned short)deviceStatus;
- (void)abortPendingIO;
- (BOOL)startResponder;
- (BOOL)startInitiator;
- (NSInteger)connectionStatus;
- (void)setResponseReceived:(BOOL)arg1;
- (BOOL)timedOut;
- (void)setTimedOut:(BOOL)arg1;
- (BOOL)sendRequest:(id)arg1 needsData:(BOOL)arg2;
- (void)deviceReset;
- (NSInteger)role;
- (void)stop;
- (BOOL)sendResponse:(id)arg1;

@end