// rea decompile_all
// name: FUN_10008ec0
// address: 0x10008ec0
// body: available
// range: 0x10008ec0-0x10009240 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10008ec0(void)

{
  LPCSTR pCVar1;
  float10 fVar2;
  ulonglong uVar3;
  
  _DAT_10029170 = 0x3f800000;
  _DAT_10029174 = 0x447a0000;
  _DAT_10029148 = 0;
  _DAT_10029188 = 0xbf800000;
  _DAT_1002914c = 0;
  _DAT_10029160 = 0;
  _DAT_10029158 = 0;
  _DAT_1002915c = 0;
  _DAT_10029190 = 0;
  _DAT_10029150 = 0;
  DAT_10029154 = 0;
  _DAT_10029228 = 0;
  _DAT_1002922c = 0;
  _DAT_10029220 = 0;
  _DAT_10029224 = 0;
  _DAT_10029230 = 0;
  _DAT_10029234 = 0;
  _DAT_10029238 = 0;
  _DAT_1002923c = 0;
  _DAT_10029240 = 0;
  _DAT_10029244 = 0;
  _DAT_10029248 = 0;
  _DAT_1002924c = 0;
  _DAT_10029178 = 1;
  _DAT_10029184 = timeGetTime();
  _DAT_10029180 = timeGetTime();
  _DAT_1002917c = 0x3a83126f;
  DAT_1002918c = 0;
  (*(code *)PTR_FUN_10028348)();
  uVar3 = FUN_1000b720(0x100232e0,0);
  _DAT_100291bc = (undefined4)uVar3;
  (*(code *)PTR_FUN_10028348)();
  uVar3 = FUN_1000b720(0x100232ec,0);
  _DAT_100291c0 = (undefined4)uVar3;
  (*(code *)PTR_FUN_10028348)();
  uVar3 = FUN_1000b720(0x100232fc,0);
  _DAT_100291c4 = (undefined4)uVar3;
  (*(code *)PTR_FUN_10028348)();
  uVar3 = FUN_1000b720(0x1002330c,0);
  _DAT_100291c8 = (undefined4)uVar3;
  (*(code *)PTR_FUN_10028348)();
  uVar3 = FUN_1000b720(0x1002331c,0);
  _DAT_100291cc = (undefined4)uVar3;
  (*(code *)PTR_FUN_10028348)();
  uVar3 = FUN_1000b720(0x1002332c,8);
  _DAT_100291d0 = (undefined4)uVar3;
  (*(code *)PTR_FUN_10028348)();
  uVar3 = FUN_1000b720(0x1002333c,4);
  _DAT_100291d4 = (undefined4)uVar3;
  (*(code *)PTR_FUN_10028348)();
  uVar3 = FUN_1000b720(0x1002334c,0);
  _DAT_100291d8 = (undefined4)uVar3;
  (*(code *)PTR_FUN_10028348)();
  uVar3 = FUN_1000b720(0x10023360,1);
  _DAT_100291dc = (undefined4)uVar3;
  (*(code *)PTR_FUN_10028348)();
  uVar3 = FUN_1000b720(0x1002336c,8);
  if ((int)uVar3 < 0x11) {
    (*(code *)PTR_FUN_10028348)();
    uVar3 = FUN_1000b720(0x1002336c,8);
    _DAT_100291e0 = (undefined4)uVar3;
  }
  else {
    _DAT_100291e0 = 0x10;
  }
  pCVar1 = (LPCSTR)(*(code *)PTR_FUN_10028348)();
  fVar2 = (float10)FUN_1000b7c0(pCVar1,0x1002337c,3.0);
  _DAT_100291e4 = (float)fVar2;
  pCVar1 = (LPCSTR)(*(code *)PTR_FUN_10028348)();
  fVar2 = (float10)FUN_1000b7c0(pCVar1,0x1002338c,1.5);
  _DAT_100291e8 = (float)fVar2;
  (*(code *)PTR_FUN_10028348)();
  uVar3 = FUN_1000b720(0x1002339c,1);
  _DAT_100291ec = (undefined4)uVar3;
  pCVar1 = (LPCSTR)(*(code *)PTR_FUN_10028348)();
  fVar2 = (float10)FUN_1000b7c0(pCVar1,0x100233a8,8.0);
  _DAT_100291f0 = (float)fVar2;
  pCVar1 = (LPCSTR)(*(code *)PTR_FUN_10028348)();
  fVar2 = (float10)FUN_1000b7c0(pCVar1,0x100233b8,0.005);
  _DAT_100291f4 = (float)fVar2;
  pCVar1 = (LPCSTR)(*(code *)PTR_FUN_10028348)();
  fVar2 = (float10)FUN_1000b7c0(pCVar1,0x100233c8,1.0);
  _DAT_100291f8 = (float)fVar2;
  (*(code *)PTR_FUN_10028348)();
  uVar3 = FUN_1000b720(0x100233d8,0);
  _DAT_100291fc = (undefined4)uVar3;
  (*(code *)PTR_FUN_10028348)();
  uVar3 = FUN_1000b720(0x100233e0,0);
  _DAT_10029200 = (undefined4)uVar3;
  (*(code *)PTR_FUN_10028348)();
  uVar3 = FUN_1000b720(0x100233f0,0);
  _DAT_10029204 = (undefined4)uVar3;
  (*(code *)PTR_FUN_10028348)();
  uVar3 = FUN_1000b720(0x10023400,1);
  _DAT_10029208 = (undefined4)uVar3;
  pCVar1 = (LPCSTR)(*(code *)PTR_FUN_10028348)();
  fVar2 = (float10)FUN_1000b7c0(pCVar1,0x1002340c,0.5);
  _DAT_1002920c = (float)fVar2;
  (*(code *)PTR_FUN_10028348)();
  uVar3 = FUN_1000b720(0x1002341c,1);
  _DAT_10029210 = (undefined4)uVar3;
  pCVar1 = (LPCSTR)(*(code *)PTR_FUN_10028348)();
  fVar2 = (float10)FUN_1000b7c0(pCVar1,0x10023424,1.0);
  _DAT_10029214 = (float)fVar2;
  pCVar1 = (LPCSTR)(*(code *)PTR_FUN_10028348)();
  fVar2 = (float10)FUN_1000b7c0(pCVar1,0x10023434,2.0);
  _DAT_10029218 = (float)fVar2;
  pCVar1 = (LPCSTR)(*(code *)PTR_FUN_10028348)();
  fVar2 = (float10)FUN_1000b7c0(pCVar1,0x10023444,0.005);
  _DAT_1002921c = (float)fVar2;
  return &DAT_10029148;
}

