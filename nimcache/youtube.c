/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O2 -g -pipe -Wall -Werror=format-security -Wp,-D_FORTIFY_SOURCE=2 -Wp,-D_GLIBCXX_ASSERTIONS -fexceptions -fstack-protector-strong -grecord-gcc-switches -specs=/usr/lib/rpm/redhat/redhat-hardened-cc1 -specs=/usr/lib/rpm/redhat/redhat-annobin-cc1 -m64 -mtune=generic -fasynchronous-unwind-tables -fstack-clash-protection -mcet -fcf-protection -O3 -fno-strict-aliasing  -I/usr/share/nim -o /home/kavis/Documents/Project/ETC/New_Music/nimcache/youtube.o /home/kavis/Documents/Project/ETC/New_Music/nimcache/youtube.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw;
typedef struct tyTuple_UV3llMMYFckfui8YMBuUZA tyTuple_UV3llMMYFckfui8YMBuUZA;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef struct RootObj RootObj;
typedef struct tySequence_4eQHGndY6XBYpFOH09apV8Q tySequence_4eQHGndY6XBYpFOH09apV8Q;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
typedef NU8 tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ;
typedef NimStringDesc* tyArray_nHXaesL0DJZHyVS07ARPRA[1];
typedef NU8 tySet_tyEnum_ProcessOption_bnU6W8LhTMnT4JaSWtGlSA;
typedef NimStringDesc* tyArray_8ZvwQIddfpj2THRVPsFzIQ[1];
struct tyTuple_UV3llMMYFckfui8YMBuUZA {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
typedef tyTuple_UV3llMMYFckfui8YMBuUZA tyArray_0ipey9aZuUA8jy4OAHzODQg[3];
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct RootObj {
TNimType* m_type;
};
typedef NU8 tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ;
struct tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw {
  RootObj Sup;
NI counter;
tySequence_4eQHGndY6XBYpFOH09apV8Q* data;
tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ mode;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence_4eQHGndY6XBYpFOH09apV8Q {
  TGenericSeq Sup;
  tyTuple_UV3llMMYFckfui8YMBuUZA data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM_PfiqOGZcmmRcZaW9aa0Xl6g_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(void, main_kWw4U4GWRKvMV4oxk2LYng)(void);
N_LIB_PRIVATE N_NIMCALL(FILE*, open_hqzpWQbdA2B8l9a6wwNoP4g)(NimStringDesc* filename, tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ mode, NI bufSize);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readLine_sO1bQXVRA6RP9cdYJXNKeSw)(FILE* f, NimStringDesc** line);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nospexecProcess)(NimStringDesc* command, NimStringDesc** args, NI argsLen_0, tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* env, tySet_tyEnum_ProcessOption_bnU6W8LhTMnT4JaSWtGlSA options);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(void, echoBinSafe)(NimStringDesc** args, NI argsLen_0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, multiReplace_umfhYZ3JuLdIcd167CziMw)(NimStringDesc* s, tyTuple_UV3llMMYFckfui8YMBuUZA* replacements, NI replacementsLen_0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemSize);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, setStackBottom)(void* theStackBottom);
NIM_EXTERNC N_NOINLINE(void, systemInit000)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_posixInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_posixDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_ospathsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_ospathsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_linuxInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_linuxDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osprocInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osprocDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strformatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strformatDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void);
NIM_EXTERNC N_NOINLINE(void, youtubeDatInit000)(void);
NimStringDesc* callYoutube_kXbq49b9bT9cy0dDx4w4fIpWA;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
extern TNimType NTI_sM4lkSb7zS6F7OVMvW9cffQ_;
STRING_LITERAL(TM_PfiqOGZcmmRcZaW9aa0Xl6g_3, "youtube-dl --embed-thumbnail --format mp4 ", 42);
STRING_LITERAL(TM_PfiqOGZcmmRcZaW9aa0Xl6g_4, "test.csv", 8);
STRING_LITERAL(TM_PfiqOGZcmmRcZaW9aa0Xl6g_5, "Downloading ", 12);
STRING_LITERAL(TM_PfiqOGZcmmRcZaW9aa0Xl6g_6, "...", 3);
STRING_LITERAL(TM_PfiqOGZcmmRcZaW9aa0Xl6g_8, "(", 1);
STRING_LITERAL(TM_PfiqOGZcmmRcZaW9aa0Xl6g_9, "\\(", 2);
STRING_LITERAL(TM_PfiqOGZcmmRcZaW9aa0Xl6g_10, ")", 1);
STRING_LITERAL(TM_PfiqOGZcmmRcZaW9aa0Xl6g_11, "\\)", 2);
STRING_LITERAL(TM_PfiqOGZcmmRcZaW9aa0Xl6g_12, " ", 1);
STRING_LITERAL(TM_PfiqOGZcmmRcZaW9aa0Xl6g_13, "", 0);
NIM_CONST tyArray_0ipey9aZuUA8jy4OAHzODQg TM_PfiqOGZcmmRcZaW9aa0Xl6g_7 = {{((NimStringDesc*) &TM_PfiqOGZcmmRcZaW9aa0Xl6g_8),
((NimStringDesc*) &TM_PfiqOGZcmmRcZaW9aa0Xl6g_9)}
,
{((NimStringDesc*) &TM_PfiqOGZcmmRcZaW9aa0Xl6g_10),
((NimStringDesc*) &TM_PfiqOGZcmmRcZaW9aa0Xl6g_11)}
,
{((NimStringDesc*) &TM_PfiqOGZcmmRcZaW9aa0Xl6g_12),
((NimStringDesc*) &TM_PfiqOGZcmmRcZaW9aa0Xl6g_13)}
}
;
static N_NIMCALL(void, TM_PfiqOGZcmmRcZaW9aa0Xl6g_2)(void) {
	nimGCvisit((void*)callYoutube_kXbq49b9bT9cy0dDx4w4fIpWA, 0);
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

N_LIB_PRIVATE N_NIMCALL(void, main_kWw4U4GWRKvMV4oxk2LYng)(void) {
	FILE* x;
	tySequence_sM4lkSb7zS6F7OVMvW9cffQ* vids;
	x = open_hqzpWQbdA2B8l9a6wwNoP4g(((NimStringDesc*) &TM_PfiqOGZcmmRcZaW9aa0Xl6g_4), ((tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ) 0), ((NI) -1));
	vids = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*) newSeq((&NTI_sM4lkSb7zS6F7OVMvW9cffQ_), 0);
	{
		NimStringDesc* link;
		NimStringDesc* res;
		link = (NimStringDesc*)0;
		res = rawNewString(((NI) 80));
		{
			while (1) {
				NIM_BOOL T4_;
				tyArray_nHXaesL0DJZHyVS07ARPRA T5_;
				NimStringDesc* T6_;
				tyArray_8ZvwQIddfpj2THRVPsFzIQ T7_;
				tyArray_nHXaesL0DJZHyVS07ARPRA T8_;
				NimStringDesc* fmtRes;
				NimStringDesc* T9_;
				NI T10_;
				NimStringDesc* T11_;
				T4_ = (NIM_BOOL)0;
				T4_ = readLine_sO1bQXVRA6RP9cdYJXNKeSw(x, (&res));
				if (!T4_) goto LA3;
				link = res;
				memset((void*)T5_, 0, sizeof(T5_));
				T6_ = (NimStringDesc*)0;
				T6_ = rawNewString(callYoutube_kXbq49b9bT9cy0dDx4w4fIpWA->Sup.len + link->Sup.len + 0);
appendString(T6_, callYoutube_kXbq49b9bT9cy0dDx4w4fIpWA);
appendString(T6_, link);
				memset((void*)T7_, 0, sizeof(T7_));
				T5_[0] = nospexecProcess(T6_, T7_, 0, NIM_NIL, 14);
				echoBinSafe(T5_, 1);
				memset((void*)T8_, 0, sizeof(T8_));
				fmtRes = rawNewString(((NI) 31));
				fmtRes = resizeString(fmtRes, 12);
appendString(fmtRes, ((NimStringDesc*) &TM_PfiqOGZcmmRcZaW9aa0Xl6g_5));
				fmtRes = resizeString(fmtRes, link->Sup.len + 0);
appendString(fmtRes, link);
				fmtRes = resizeString(fmtRes, 3);
appendString(fmtRes, ((NimStringDesc*) &TM_PfiqOGZcmmRcZaW9aa0Xl6g_6));
				T8_[0] = copyString(fmtRes);
				echoBinSafe(T8_, 1);
				T9_ = (NimStringDesc*)0;
				T9_ = multiReplace_umfhYZ3JuLdIcd167CziMw(link, TM_PfiqOGZcmmRcZaW9aa0Xl6g_7, 3);
				vids = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*) incrSeqV2(&(vids)->Sup, sizeof(NimStringDesc*));
				T10_ = vids->Sup.len++;
				T11_ = (NimStringDesc*)0;
				T11_ = vids->data[T10_]; vids->data[T10_] = copyStringRC1(T9_);
				if (T11_) nimGCunrefNoCycle(T11_);
			} LA3: ;
		}
	}
	{
		NimStringDesc* vid;
		NI i;
		NI L;
		NI T13_;
		vid = (NimStringDesc*)0;
		i = ((NI) 0);
		T13_ = (vids ? vids->Sup.len : 0);
		L = T13_;
		{
			while (1) {
				tyArray_nHXaesL0DJZHyVS07ARPRA T16_;
				if (!(i < L)) goto LA15;
				vid = vids->data[i];
				memset((void*)T16_, 0, sizeof(T16_));
				T16_[0] = copyString(vid);
				echoBinSafe(T16_, 1);
				i += ((NI) 1);
			} LA15: ;
		}
	}
}

static N_INLINE(void, initStackBottomWith)(void* locals) {
	setStackBottom(locals);
}
void PreMainInner(void) {
	systemInit000();
	stdlib_parseutilsDatInit000();
	stdlib_mathDatInit000();
	stdlib_algorithmDatInit000();
	stdlib_strutilsDatInit000();
	stdlib_posixDatInit000();
	stdlib_timesDatInit000();
	stdlib_ospathsDatInit000();
	stdlib_osDatInit000();
	stdlib_hashesDatInit000();
	stdlib_strtabsDatInit000();
	stdlib_streamsDatInit000();
	stdlib_linuxDatInit000();
	stdlib_cpuinfoDatInit000();
	stdlib_osprocDatInit000();
	stdlib_macrosDatInit000();
	stdlib_unicodeDatInit000();
	stdlib_strformatDatInit000();
	stdlib_sequtilsDatInit000();
	youtubeDatInit000();
	stdlib_parseutilsInit000();
	stdlib_mathInit000();
	stdlib_algorithmInit000();
	stdlib_strutilsInit000();
	stdlib_posixInit000();
	stdlib_timesInit000();
	stdlib_ospathsInit000();
	stdlib_osInit000();
	stdlib_hashesInit000();
	stdlib_strtabsInit000();
	stdlib_streamsInit000();
	stdlib_linuxInit000();
	stdlib_cpuinfoInit000();
	stdlib_osprocInit000();
	stdlib_macrosInit000();
	stdlib_unicodeInit000();
	stdlib_strformatInit000();
	stdlib_sequtilsInit000();
}

void PreMain(void) {
	void (*volatile inner)(void);
	systemDatInit000();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	NimMainModule();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)(void);
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void) {
	NimStringDesc* T1_;
nimRegisterGlobalMarker(TM_PfiqOGZcmmRcZaW9aa0Xl6g_2);
	T1_ = (NimStringDesc*)0;
	T1_ = callYoutube_kXbq49b9bT9cy0dDx4w4fIpWA; callYoutube_kXbq49b9bT9cy0dDx4w4fIpWA = copyStringRC1(((NimStringDesc*) &TM_PfiqOGZcmmRcZaW9aa0Xl6g_3));
	if (T1_) nimGCunrefNoCycle(T1_);
	{
		if (!NIM_TRUE) goto LA4_;
		main_kWw4U4GWRKvMV4oxk2LYng();
	}
	LA4_: ;
}

NIM_EXTERNC N_NOINLINE(void, youtubeDatInit000)(void) {
}

