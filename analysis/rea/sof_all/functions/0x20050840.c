// rea decompile_all
// name: FUN_20050840
// address: 0x20050840
// body: available
// range: 0x20050840-0x20050df6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20050840(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  byte bVar6;
  CHAR local_400 [1024];
  
  GetLocaleInfoA(0x800,5,local_400,0x400);
  iVar2 = FUN_200f9e13(local_400);
  if (iVar2 == 0x31) {
    DAT_2039021c = '\x01';
  }
  GetLocaleInfoA(0x800,0x1002,local_400,0x400);
  iVar3 = __strcmpi(local_400,s_Germany_20137454);
  if (iVar3 == 0) {
    DAT_2039021c = '\x01';
  }
  bVar5 = iVar3 == 0 || iVar2 == 0x31;
  GetLocaleInfoA(0x800,0x1001,local_400,0x400);
  iVar2 = __strcmpi(local_400,s_German_2013744c);
  if (iVar2 == 0) {
    bVar5 = true;
    DAT_2039021c = '\x01';
  }
  else if (DAT_2039021c == '\0') goto LAB_20050902;
  Cvar_Set(s_non_multilingual_20137438,&DAT_2011d31c);
LAB_20050902:
  FUN_200216c0(1);
  DAT_20390210 = Cvar_Get(s_lock_password_20137428,&DAT_2015ee44,0x1080,0);
  DAT_203901f8 = Cvar_Get(s_lock_deaths_2013741c,&DAT_2011d31c,0x1080,0);
  DAT_203901fc = Cvar_Get(s_lock_blood_20137410,&DAT_2011d31c,0x1080,0);
  DAT_20390200 = Cvar_Get(s_lock_gorezones_20137400,&DAT_2011d31c,0x1080,0);
  DAT_20390204 = Cvar_Get(s_lock_sever_201373f4,&DAT_2011d31c,0x1080,0);
  DAT_20390208 = Cvar_Get(s_lock_textures_201373e4,&DAT_2011d31c,0x1080,0);
  DAT_2039020c = Cvar_Get(s_lock_pure_201373d8,&DAT_2011d31c,0x1080,0);
  DAT_20390214 = Cvar_Get(s_sv_violence_201373cc,&DAT_2011c4ac,0x14,0);
  _DAT_20390218 = Cvar_Get(s_cl_violence_201373c0,&DAT_2011c4ac,0x82,0);
  cVar1 = FUN_20051c81(local_400);
  if (cVar1 == '\0') {
    DAT_2039021c = '\x01';
  }
  else {
    Cvar_Set(s_lock_password_20137428,local_400);
  }
  iVar2 = FUN_200520f8();
  if ((double)iVar2 < 0.0) {
    DAT_2039021c = '\x01';
  }
  else {
    iVar2 = FUN_200520f8();
    Cvar_SetValue(s_lock_deaths_2013741c,(float)iVar2);
  }
  iVar2 = FUN_200520e1();
  if ((double)iVar2 < 0.0) {
    DAT_2039021c = '\x01';
  }
  else {
    iVar2 = FUN_200520e1();
    Cvar_SetValue(s_lock_blood_20137410,(float)iVar2);
  }
  iVar2 = FUN_200520ca();
  if ((double)iVar2 < 0.0) {
    DAT_2039021c = '\x01';
  }
  else {
    iVar2 = FUN_200520ca();
    Cvar_SetValue(s_lock_gorezones_20137400,(float)iVar2);
  }
  iVar2 = FUN_2005210f();
  if ((double)iVar2 < 0.0) {
    DAT_2039021c = '\x01';
  }
  else {
    iVar2 = FUN_2005210f();
    Cvar_SetValue(s_lock_sever_201373f4,(float)iVar2);
  }
  iVar2 = FUN_20052126();
  if ((double)iVar2 < 0.0) {
    DAT_2039021c = '\x01';
  }
  else {
    iVar2 = FUN_20052126();
    Cvar_SetValue(s_lock_textures_201373e4,(float)iVar2);
  }
  iVar2 = FUN_2005213d();
  if (0.0 <= (double)iVar2) {
    iVar2 = FUN_2005213d();
    Cvar_SetValue(s_lock_pure_201373d8,(float)iVar2);
  }
  if (DAT_2039021c != '\0') {
    bVar5 = true;
    Cvar_SetValue(s_lock_deaths_2013741c,0x3f800000);
    Cvar_SetValue(s_lock_blood_20137410,0x3f800000);
    Cvar_SetValue(s_lock_gorezones_20137400,0x3f800000);
    Cvar_SetValue(s_lock_sever_201373f4,0x3f800000);
    Cvar_SetValue(s_lock_textures_201373e4,0x3f800000);
    Cvar_SetValue(s_lock_pure_201373d8,0x3f800000);
  }
  FUN_200216c0(0);
  if (bVar5) {
    *(undefined1 **)(DAT_20390210 + 0x10) = &LAB_20051480;
    *(undefined1 **)(DAT_203901f8 + 0x10) = &LAB_20051480;
    *(undefined1 **)(DAT_203901fc + 0x10) = &LAB_20051480;
    *(undefined1 **)(DAT_20390200 + 0x10) = &LAB_20051480;
    *(undefined1 **)(DAT_20390204 + 0x10) = &LAB_20051480;
    *(undefined1 **)(DAT_20390208 + 0x10) = &LAB_20051480;
    *(undefined1 **)(DAT_2039020c + 0x10) = &LAB_20051480;
  }
  else {
    *(undefined1 **)(DAT_20390210 + 0x10) = &LAB_20050e00;
    *(undefined1 **)(DAT_203901f8 + 0x10) = &LAB_20050e20;
    *(undefined1 **)(DAT_203901fc + 0x10) = &LAB_20050f30;
    *(undefined1 **)(DAT_20390200 + 0x10) = &LAB_20051040;
    *(undefined1 **)(DAT_20390204 + 0x10) = &LAB_20051150;
    *(undefined1 **)(DAT_20390208 + 0x10) = &LAB_20051260;
    *(undefined1 **)(DAT_2039020c + 0x10) = &LAB_20051370;
  }
  FUN_200216c0(1);
  bVar6 = *(float *)(DAT_203901f8 + 0x18) != 0.0;
  if (*(float *)(DAT_203901fc + 0x18) != 0.0) {
    bVar6 = bVar6 | 2;
  }
  if (*(float *)(DAT_20390204 + 0x18) != 0.0) {
    bVar6 = bVar6 | 8;
  }
  if (*(float *)(DAT_20390200 + 0x18) != 0.0) {
    bVar6 = bVar6 | 4;
  }
  if (*(float *)(DAT_20390208 + 0x18) != 0.0) {
    bVar6 = bVar6 | 0x10;
  }
  iVar2 = FUN_2001cae0();
  if (iVar2 == 0) {
    uVar4 = FUN_20055450(&DAT_2011d0b4,bVar6);
    FUN_20022170(s_sv_violence_201373cc,uVar4);
  }
  if (*(float *)(DAT_2039020c + 0x18) != 0.0) {
    bVar6 = bVar6 | 0x20;
  }
  uVar4 = FUN_20055450(&DAT_2011d0b4,bVar6);
  FUN_20022170(s_cl_violence_201373c0,uVar4);
  FUN_200216c0(0);
  return;
}

