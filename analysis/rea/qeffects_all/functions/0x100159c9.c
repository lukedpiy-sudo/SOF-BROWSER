// rea decompile_all
// name: FUN_100159c9
// address: 0x100159c9
// body: available
// range: 0x100159c9-0x10015bbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10015bbf with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall
FUN_100159c9(void *this,int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9)

{
  code *pcVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  errno_t eVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  long local_8;
  
  local_8 = 0;
  if (param_2 == 1) {
    uVar2 = param_3 & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    if (((uVar2 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
      puVar6 = (&PTR_DAT_10027e24)[in_EAX];
    }
    else {
      puVar6 = *(undefined **)(&DAT_10027e58 + in_EAX * 4);
    }
    puVar7 = puVar6 + 1;
    iVar3 = (param_4 * 7 -
            (int)(puVar7 + param_3 * 0x16d + -0x63db +
                           ((int)(param_3 + 299) / 400 - (int)(param_3 - 1) / 100) +
                           ((int)((param_3 - 1) + ((int)(param_3 - 1) >> 0x1f & 3U)) >> 2)) % 7) +
            param_5;
    if ((int)(puVar7 + param_3 * 0x16d + -0x63db +
                       ((int)(param_3 + 299) / 400 - (int)(param_3 - 1) / 100) +
                       ((int)((param_3 - 1) + ((int)(param_3 - 1) >> 0x1f & 3U)) >> 2)) % 7 <=
        param_5) {
      puVar7 = puVar6 + -6;
    }
    puVar7 = puVar7 + iVar3;
    if (param_4 == 5) {
      if (((uVar2 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
        iVar3 = (&DAT_10027e28)[in_EAX];
      }
      else {
        iVar3 = *(int *)(&DAT_10027e5c + in_EAX * 4);
      }
      if (iVar3 < (int)puVar7) {
        puVar7 = puVar7 + -7;
      }
    }
  }
  else {
    uVar2 = param_3 & 0x80000003;
    bVar8 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar8 = (uVar2 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (((bVar8) && (iVar3 = (int)param_3 / 100, (int)param_3 % 100 != 0)) ||
       (iVar3 = (int)(param_3 + 0x76c) / 400, (int)(param_3 + 0x76c) % 400 == 0)) {
      puVar7 = (&PTR_DAT_10027e24)[in_EAX];
    }
    else {
      puVar7 = *(undefined **)(&DAT_10027e58 + in_EAX * 4);
    }
    puVar7 = puVar7 + param_6;
  }
  iVar5 = (((int)this * 0x3c + param_7) * 0x3c + param_8) * 1000 + param_9;
  if (param_1 == 1) {
    DAT_10027e90 = param_3;
    DAT_10027e94 = puVar7;
    DAT_10027e98 = iVar5;
  }
  else {
    DAT_10027ea0 = puVar7;
    DAT_10027ea4 = iVar5;
    eVar4 = FID_conflict___get_dstbias(&local_8);
    if (eVar4 != 0) {
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar3 = local_8 * 1000;
    DAT_10027ea4 = DAT_10027ea4 + iVar3;
    DAT_10027e9c = param_3;
    if (DAT_10027ea4 < 0) {
      DAT_10027ea4 = DAT_10027ea4 + 86400000;
      DAT_10027ea0 = DAT_10027ea0 + -1;
    }
    else {
      iVar3 = 86400000;
      if (86399999 < DAT_10027ea4) {
        DAT_10027ea4 = DAT_10027ea4 + -86400000;
        DAT_10027ea0 = DAT_10027ea0 + 1;
      }
    }
  }
  return iVar3;
}

