/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "MTLModel.h"

@class NSData, NSDictionary, NSString, NSURL;

@interface VTMHTTPRequestSetup : NSObject //MTLModel
{
    BOOL _resumable;
    NSURL *_URL;
    NSString *_HTTPMethod;
    NSDictionary *_HTTPHeaders;
    NSData *_HTTPBody;
    NSString *_streamBoundary;
    NSData *_streamBody;
}

+ (id)defaultRequestSetupForDownloadFromURL:(id)arg1 resumable:(BOOL)arg2;
+ (id)requestSetupFromTransferTask:(id)arg1;
+ (id)requestSetupForURLRequest:(id)arg1 streamBoundary:(id)arg2 streamBody:(id)arg3;
+ (id)requestSetupForURLRequest:(id)arg1 resumable:(BOOL)arg2;
@property(readonly, nonatomic) NSData *streamBody; // @synthesize streamBody=_streamBody;
@property(readonly, nonatomic) NSString *streamBoundary; // @synthesize streamBoundary=_streamBoundary;
@property(readonly, nonatomic) BOOL resumable; // @synthesize resumable=_resumable;
@property(readonly, nonatomic) NSData *HTTPBody; // @synthesize HTTPBody=_HTTPBody;
@property(readonly, nonatomic) NSDictionary *HTTPHeaders; // @synthesize HTTPHeaders=_HTTPHeaders;
@property(readonly, nonatomic) NSString *HTTPMethod; // @synthesize HTTPMethod=_HTTPMethod;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
//- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 HTTPMethod:(id)arg2 HTTPHeaders:(id)arg3 HTTPBody:(id)arg4 resumable:(BOOL)arg5 streamBoundary:(id)arg6 streamBody:(id)arg7;

@end

