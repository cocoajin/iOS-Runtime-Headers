/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPFontKerning : NSObject <CPDisposable> {
    struct __CFData { } *kernTable;
    const char *dataPtr;
    unsigned int offset;
    unsigned int kernTableLength;
    struct __CFDictionary { } *kernDictionary;
    BOOL override;
    BOOL valid;
}


- (struct __CFDictionary { }*)createKernTable;
- (short)readShort;
- (id)initWithCGFont:(struct CGFont { }*)arg1;
- (void)doTable;
- (void)doTTSubtable;
- (void)doOTSubtable;
- (void)doSubtableFormat3;
- (void)doSubtableFormat2;
- (void)doSubtableFormat1;
- (void)doSubtableFormat0;
- (void)doKerningPair;
- (unsigned short)readUnsignedShort;
- (id)initWithKernData:(struct __CFData { }*)arg1;
- (unsigned int)readUnsignedLong;
- (unsigned char)readByte;
- (void)dispose;
- (void)dealloc;
- (void)finalize;

@end