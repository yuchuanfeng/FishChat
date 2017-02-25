//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableDictionary, NSString;

@interface iAPCache : NSObject <PBCoding>
{
    NSMutableDictionary *dicProductToPrepare;
    NSMutableDictionary *dicBillNos;
    NSMutableDictionary *dicProductPrice;
    NSMutableDictionary *dicProductLocale;
    NSMutableDictionary *dicUnVerifyReceipt;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *dicUnVerifyReceipt; // @synthesize dicUnVerifyReceipt;
@property(retain, nonatomic) NSMutableDictionary *dicProductLocale; // @synthesize dicProductLocale;
@property(retain, nonatomic) NSMutableDictionary *dicProductPrice; // @synthesize dicProductPrice;
@property(retain, nonatomic) NSMutableDictionary *dicBillNos; // @synthesize dicBillNos;
- (void).cxx_destruct;
- (void)removeUnverifyTransactionForProductID:(id)arg1;
- (void)addUnverifyTransaction:(id)arg1;
- (id)UnVerifyTransactionForProductID:(id)arg1;
- (id)localeForProductID:(id)arg1;
- (id)priceForProductID:(id)arg1;
- (id)productForProductID:(id)arg1;
- (void)addProduct:(id)arg1;
- (void)initUnVerifyTransaction;
- (void)initProductDictionary;
- (void)dealloc;
- (id)init;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

