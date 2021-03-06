@import Foundation;

typedef NSString *SNTErrorDomain __attribute((swift_newtype(struct)))
__attribute((swift_name("ErrorDomain")));

extern void SNTErrorDomainProcess(SNTErrorDomain d)
    __attribute((swift_name("ErrorDomain.process(self:)")));

typedef struct {} Foo;

extern const SNTErrorDomain SNTErrOne
    __attribute((swift_name("ErrorDomain.one")));
extern const SNTErrorDomain SNTErrTwo;
extern const SNTErrorDomain SNTErrorDomainThree;
extern const SNTErrorDomain SNTFourErrorDomain;
extern const SNTErrorDomain SNTFive
    __attribute((swift_name("stillAMember")));
extern const SNTErrorDomain SNTElsewhere
    __attribute((swift_name("Foo.err")));

typedef NSString *SNTClosedEnum __attribute((swift_newtype(enum)))
__attribute((swift_name("ClosedEnum")));

extern const SNTClosedEnum SNTFirstClosedEntryEnum;
extern const SNTClosedEnum SNTSecondEntry;
extern const SNTClosedEnum SNTClosedEnumThirdEntry;
