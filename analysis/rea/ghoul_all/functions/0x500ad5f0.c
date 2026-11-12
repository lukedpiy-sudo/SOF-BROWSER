// rea decompile_all
// name: FUN_500ad5f0
// address: 0x500ad5f0
// body: available
// range: 0x500ad5f0-0x500ad81b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_500ad5f0(void)

{
  float fVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  double dVar14;
  undefined8 uVar15;
  
  fVar1 = (DAT_5015ccdc - _DAT_5015d270) + _DAT_5015d8f8;
  if (fVar1 != 0.0) {
    dVar14 = (double)fVar1;
    puVar13 = &DAT_501431b4;
    puVar2 = FUN_500fe1e0(&DAT_501431b4);
    (*DAT_5015cb50)(s_stat_playedtime_base_5014cd14,puVar2,puVar13,dVar14);
    uVar9 = __ftol();
    uVar5 = (undefined4)
            ((longlong)((ulonglong)(uint)((int)uVar9 >> 0x1f) << 0x20 | uVar9 & 0xffffffff) % 0x3c);
    uVar9 = __ftol();
    uVar6 = (undefined4)
            ((longlong)((ulonglong)(uint)((int)uVar9 >> 0x1f) << 0x20 | uVar9 & 0xffffffff) % 0x3c);
    lVar10 = __ftol();
    uVar3 = (undefined4)lVar10;
    uVar9 = __ftol();
    uVar7 = (undefined4)
            ((longlong)((ulonglong)(uint)((int)uVar9 >> 0x1f) << 0x20 | uVar9 & 0xffffffff) % 0x3c);
    iVar12 = DAT_5015d250 + DAT_5015d8d8;
    puVar13 = &DAT_5014cd08;
    iVar11 = DAT_5015d250;
    puVar2 = FUN_500fe1e0(&DAT_5014cd08);
    (*DAT_5015cb50)(s_stat_guyskilled_5014ccf8,puVar2,puVar13,iVar11,iVar12);
    iVar12 = DAT_5015d254 + DAT_5015d8dc;
    puVar13 = &DAT_5014cd08;
    iVar11 = DAT_5015d254;
    puVar2 = FUN_500fe1e0(&DAT_5014cd08);
    (*DAT_5015cb50)(s_stat_friendlieskilled_5014cce0,puVar2,puVar13,iVar11,iVar12);
    puVar2 = FUN_500fe1e0(&DAT_5014cd08);
    (*DAT_5015cb50)(s_stat_throatshots_5014cccc,puVar2);
    iVar12 = DAT_5015d25c + DAT_5015d8e4;
    puVar13 = &DAT_5014cd08;
    iVar11 = DAT_5015d25c;
    puVar2 = FUN_500fe1e0(&DAT_5014cd08);
    (*DAT_5015cb50)(s_stat_nutshots_5014ccbc,puVar2,puVar13,iVar11,iVar12);
    iVar12 = DAT_5015d260 + DAT_5015d8e8;
    puVar13 = &DAT_5014cd08;
    iVar11 = DAT_5015d260;
    puVar2 = FUN_500fe1e0(&DAT_5014cd08);
    (*DAT_5015cb50)(s_stat_headshots_5014ccac,puVar2,puVar13,iVar11,iVar12);
    iVar12 = DAT_5015d264 + DAT_5015d8ec;
    puVar13 = &DAT_5014cd08;
    iVar11 = DAT_5015d264;
    puVar2 = FUN_500fe1e0(&DAT_5014cd08);
    (*DAT_5015cb50)(s_stat_gibs_5014cca0,puVar2,puVar13,iVar11,iVar12);
    uVar15 = CONCAT44(DAT_5015d268 + DAT_5015d8f0,DAT_5015d268);
    puVar13 = &DAT_5014cd08;
    puVar2 = FUN_500fe1e0(&DAT_5014cd08);
    (*DAT_5015cb50)(s_stat_savesused_5014cc90,puVar2,puVar13,uVar15);
    uVar9 = __ftol();
    uVar8 = (undefined4)
            ((longlong)((ulonglong)(uint)((int)uVar9 >> 0x1f) << 0x20 | uVar9 & 0xffffffff) % 0x3c);
    lVar10 = __ftol();
    uVar4 = (undefined4)lVar10;
    puVar13 = &DAT_5014cc70;
    puVar2 = FUN_500fe1e0(&DAT_5014cc70);
    (*DAT_5015cb50)(s_stat_playedtime_5014cc60,puVar2,puVar13,uVar4,uVar8,uVar7,uVar3,uVar6,uVar5);
    puVar2 = FUN_500fe1e0(&DAT_5014cd08);
    (*DAT_5015cb50)(s_stat_cashearned_5014cc50,puVar2);
  }
  return;
}

