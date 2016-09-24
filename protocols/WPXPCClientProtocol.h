/* Generated by RuntimeBrowser.
 */

@protocol WPXPCClientProtocol <NSObject>

@required

- (void)registeredWithDaemonAndContinuingSession:(BOOL)arg1;

@optional

- (void)advertiserStateDidChange:(int)arg1;
- (void)advertisingFailedToStart:(NSError *)arg1 ofType:(unsigned char)arg2;
- (void)advertisingPendingOfType:(unsigned char)arg1;
- (void)advertisingStartedOfType:(unsigned char)arg1;
- (void)advertisingStoppedOfType:(unsigned char)arg1;
- (void)bandwidthStateUpdated:(NSNumber *)arg1;
- (void)central:(NSUUID *)arg1 subscribed:(BOOL)arg2 toCharacteristic:(NSString *)arg3 inService:(NSString *)arg4;
- (void)connectedDevice:(NSUUID *)arg1 withError:(NSError *)arg2 shouldDiscover:(BOOL)arg3;
- (void)deviceDiscovered:(NSDictionary *)arg1;
- (void)disconnectedDevice:(NSUUID *)arg1 withError:(NSError *)arg2;
- (void)discoveredCharacteristicsAndServices:(NSDictionary *)arg1 forPeripheral:(NSUUID *)arg2;
- (void)enteredZone:(NSData *)arg1;
- (void)exitedZone:(NSData *)arg1;
- (void)failedToRegisterZones:(NSMutableSet *)arg1 withError:(NSError *)arg2;
- (void)failedToStartTrackingPeer:(WPPeerTrackingRequest *)arg1 error:(NSError *)arg2;
- (void)fetchedCurrentlyTrackedZones:(NSDictionary *)arg1;
- (void)lostPeer:(NSUUID *)arg1 ofType:(unsigned char)arg2;
- (void)peerTrackingAvailable;
- (void)peerTrackingFull;
- (void)receivedData:(NSData *)arg1 forCharacteristic:(NSString *)arg2 inService:(NSString *)arg3 forPeripheral:(NSUUID *)arg4;
- (void)scannerStateDidChange:(int)arg1;
- (void)scanningFailedToStart:(NSError *)arg1 ofType:(unsigned char)arg2;
- (void)scanningStartedOfType:(unsigned char)arg1;
- (void)scanningStoppedOfType:(unsigned char)arg1;
- (void)sentData:(NSData *)arg1 forCharacteristic:(NSString *)arg2 inService:(NSString *)arg3 forPeripheral:(NSUUID *)arg4 withError:(NSError *)arg5;
- (void)startedTrackingPeer:(NSUUID *)arg1 ofType:(unsigned char)arg2;
- (void)stateDidChange:(int)arg1;
- (void)stoppedTrackingPeer:(NSUUID *)arg1 ofType:(unsigned char)arg2;
- (void)updateAdvertisingRequest:(void *)arg1 withUpdate:(void *)arg2; // needs 2 arg types, found 7: WPAdvertisingRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WPAdvertisingRequest *, void*
- (void)updateScanningRequest:(void *)arg1 withUpdate:(void *)arg2; // needs 2 arg types, found 7: WPScanRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WPScanRequest *, void*
- (void)updatedNotificationState:(BOOL)arg1 forCharacteristic:(NSString *)arg2 inService:(NSString *)arg3 withPeripheral:(NSUUID *)arg4;

@end