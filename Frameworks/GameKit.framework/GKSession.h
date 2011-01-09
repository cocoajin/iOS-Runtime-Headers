/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */



@interface GKSession : NSObject 
{
    id _session;
}

@property <GKSessionDelegate> *delegate;
@property(readonly) NSString *sessionID;
@property(readonly) NSString *displayName;
@property(readonly) NSInteger sessionMode;
@property(readonly) NSString *peerID;
@property(getter=isAvailable) BOOL available;
@property double disconnectTimeout;
@property <GKSessionPrivateDelegate> *privateDelegate;
@property(getter=isBusy) BOOL busy;
@property BOOL wifiEnabled;

+ (void)initialize;

- (id)connection;
- (BOOL)isBusy;
- (void)dealloc;
- (id)description;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)displayName;
- (id)privateImpl;
- (id)displayNameForPeer:(id)arg1;
- (id)sessionID;
- (void)setPrivateDelegate:(id)arg1;
- (BOOL)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(NSInteger)arg3 error:(id*)arg4;
- (BOOL)sendDataToAllPeers:(id)arg1 withDataMode:(NSInteger)arg2 error:(id*)arg3;
- (void)setDataReceiveHandler:(id)arg1 withContext:(void*)arg2;
- (void)connectToPeer:(id)arg1 withTimeout:(double)arg2;
- (void)cancelConnectToPeer:(id)arg1;
- (BOOL)acceptConnectionFromPeer:(id)arg1 error:(id*)arg2;
- (void)denyConnectionFromPeer:(id)arg1;
- (void)disconnectPeerFromAllPeers:(id)arg1;
- (void)disconnectFromAllPeers;
- (void)setAvailable:(BOOL)arg1;
- (BOOL)isAvailable;
- (id)peersWithConnectionState:(NSInteger)arg1;
- (BOOL)wifiEnabled;
- (void)setWifiEnabled:(BOOL)arg1;
- (BOOL)isPeerBusy:(id)arg1;
- (void)setDisconnectTimeout:(double)arg1;
- (NSInteger)sessionMode;
- (id)privateDelegate;
- (double)disconnectTimeout;
- (void)setBusy:(BOOL)arg1;
- (id)peerID;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2;
- (void)setSearchCriteria:(id)arg1;
- (id)searchCriteria;
- (BOOL)startAdvertisingAndReturnError:(id*)arg1;
- (void)stopAdvertising;
- (BOOL)startSearchingAndReturnError:(id*)arg1;
- (void)stopSearchingForPeers;
- (id)initWithSessionID:(id)arg1 displayName:(id)arg2 sessionMode:(NSInteger)arg3;

@end