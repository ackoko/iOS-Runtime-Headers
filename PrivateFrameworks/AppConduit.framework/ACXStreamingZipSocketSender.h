/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
 */

@interface ACXStreamingZipSocketSender : NSObject {
    long long _bytesOutput;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSError *_error;
    id /* block */ _progressBlock;
    BOOL _stopWriting;
    long long _totalBytes;
    NSURL *_url;
    id /* block */ _writerBlock;
}

@property long long bytesOutput;
@property (readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain) NSError *error;
@property (copy) id /* block */ progressBlock;
@property BOOL stopWriting;
@property long long totalBytes;
@property (readonly) NSURL *url;
@property (readonly) id /* block */ writerBlock;

+ (id)senderForURL:(id)arg1 queue:(id)arg2 writingUsingBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)beginSendingWithCompletionBlock:(id /* block */)arg1;
- (long long)bytesOutput;
- (void)cancelSending;
- (id)clientQueue;
- (id)error;
- (id)initWithURL:(id)arg1 queue:(id)arg2 writerBlock:(id /* block */)arg3;
- (id /* block */)progressBlock;
- (void)setBytesOutput:(long long)arg1;
- (void)setError:(id)arg1;
- (void)setProgressBlock:(id /* block */)arg1;
- (void)setStopWriting:(BOOL)arg1;
- (void)setTotalBytes:(long long)arg1;
- (BOOL)stopWriting;
- (long long)totalBytes;
- (id)url;
- (id /* block */)writerBlock;

@end