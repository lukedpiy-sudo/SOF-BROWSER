// rea decompile_all
// name: FUN_200f92d0
// address: 0x200f92d0
// body: available
// range: 0x200f92d0-0x200f9427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200f93b0) */
/* WARNING: Removing unreachable block (ram,0x200f938c) */
/* WARNING: Removing unreachable block (ram,0x200f9327) */
/* WARNING: Removing unreachable block (ram,0x200f93ec) */

void FUN_200f92d0(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  uint local_108;
  byte local_100 [256];
  
  sVar5 = 0;
  pbVar4 = local_100;
  do {
    *pbVar4 = (byte)sVar5;
    sVar5 = sVar5 + 1;
    pbVar4 = pbVar4 + 1;
  } while (sVar5 < 0x100);
  local_108 = 0;
  uVar3 = 0;
  iVar7 = 0x100;
  pbVar4 = local_100;
  do {
    uVar3 = (uint)*pbVar4 + uVar3 + *(byte *)(local_108 + param_1) & 0x800000ff;
    iVar7 = iVar7 + -1;
    local_108 = (uint)(byte)((longlong)(ulonglong)(local_108 + 1) % (longlong)param_2);
    bVar1 = *pbVar4;
    *pbVar4 = local_100[uVar3];
    local_100[uVar3] = bVar1;
    pbVar4 = pbVar4 + 1;
  } while (iVar7 != 0);
  sVar5 = 0;
  if (0 < param_4) {
    uVar3 = 0;
    uVar6 = 0;
    iVar7 = 0;
    do {
      bVar1 = *(byte *)(iVar7 + param_3);
      uVar3 = bVar1 + 1 + uVar3 & 0x800000ff;
      uVar6 = local_100[uVar3] + uVar6 & 0x800000ff;
      bVar2 = local_100[uVar3];
      local_100[uVar3] = local_100[uVar6];
      local_100[uVar6] = bVar2;
      sVar5 = sVar5 + 1;
      *(byte *)(iVar7 + param_3) =
           local_100[(uint)local_100[uVar3] + (uint)local_100[uVar6] & 0xff] ^ bVar1;
      iVar7 = (int)sVar5;
    } while (iVar7 < param_4);
  }
  return;
}

