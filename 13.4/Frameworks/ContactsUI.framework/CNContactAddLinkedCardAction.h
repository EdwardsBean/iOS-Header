//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNContactAction.h>

#import <ContactsUI/CNContactContentViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNContactPickerDelegate-Protocol.h>

@class CNContact, CNContactPickerViewController, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNContactAddLinkedCardAction : CNContactAction <CNContactPickerDelegate, CNContactContentViewControllerDelegate>
{
    CNContact *_chosenContact;
    NSArray *_editingLinkedContacts;
    CNContactPickerViewController *_contactPicker;
    CNContact *_selectedContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNContact *selectedContact; // @synthesize selectedContact=_selectedContact;
@property(retain, nonatomic) CNContactPickerViewController *contactPicker; // @synthesize contactPicker=_contactPicker;
@property(retain, nonatomic) NSArray *editingLinkedContacts; // @synthesize editingLinkedContacts=_editingLinkedContacts;
@property(retain, nonatomic) CNContact *chosenContact; // @synthesize chosenContact=_chosenContact;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 labeledValue:(id)arg4;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)peoplePickerLinkButtonTapped;
- (void)performActionWithSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

