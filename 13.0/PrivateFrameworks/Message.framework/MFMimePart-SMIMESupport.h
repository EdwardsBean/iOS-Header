//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/MFMimePart.h>

@class MFError;

@interface MFMimePart (SMIMESupport)
- (id)copySigners;
@property(readonly, nonatomic) MFError *SMIMEError;
- (id)decodeApplicationPkcs7_mime;
- (id)decodeMultipartSigned;
- (_Bool)_needsSignatureVerification:(id *)arg1;
- (void)_setSigners:(id)arg1;
- (void)_setSMIMEError:(id)arg1;
- (id)newEncryptedPartWithData:(id)arg1 compositionSpecification:(id)arg2 encryptedData:(id *)arg3;
- (id)newSignedPartWithData:(id)arg1 sender:(id)arg2 compositionSpecification:(id)arg3 signatureData:(id *)arg4;
@end

