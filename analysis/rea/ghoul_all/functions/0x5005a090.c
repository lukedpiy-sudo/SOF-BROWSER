// rea decompile_all
// name: FUN_5005a090
// address: 0x5005a090
// body: available
// range: 0x5005a090-0x5005a328 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5005a090(int param_1)

{
  byte bVar1;
  int iVar2;
  void *this;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  ushort uVar13;
  int *piVar14;
  byte local_2a;
  float local_28;
  byte *local_24;
  
  iVar10 = -1;
  local_28 = 1e+09;
  iVar12 = 0;
  piVar14 = (int *)(param_1 + 0xb8);
  do {
    iVar2 = *piVar14;
    if ((iVar2 != 0) &&
       (fVar3 = *(float *)(iVar2 + 4) - *(float *)(DAT_5015cca0 + 0x468),
       fVar4 = *(float *)(iVar2 + 8) - *(float *)(DAT_5015cca0 + 0x46c),
       fVar5 = *(float *)(iVar2 + 0xc) - *(float *)(DAT_5015cca0 + 0x470),
       fVar3 = fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5, fVar3 < local_28)) {
      iVar10 = iVar12;
      local_28 = fVar3;
    }
    iVar12 = iVar12 + 1;
    piVar14 = piVar14 + 6;
  } while (iVar12 < 0x20);
  if (iVar10 < 0) {
    return;
  }
  piVar14 = (int *)(param_1 + 0xb8 + iVar10 * 0x18);
  iVar10 = *(int *)(*(int *)(param_1 + 0xb8 + iVar10 * 0x18) + 0x45c);
  this = *(void **)(iVar10 + 0x40c);
  uVar8 = FUN_50060990(&DAT_50159a60,*(ushort *)(iVar10 + 0x408));
  uVar8 = uVar8 & 0xff;
  local_24 = (byte *)0x0;
  local_28 = 0.0;
  iVar10 = *(int *)(*(int *)(*piVar14 + 0x45c) + 0x4c);
  if (iVar10 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(ushort *)(iVar10 + 0xc);
    if (((uVar13 != 0) && (DAT_50159a78 != 0)) &&
       ((uint)uVar13 < (uint)((DAT_50159a7c - DAT_50159a78) / 0x34))) {
      iVar10 = DAT_50159a78 + (uint)uVar13 * 0x34;
      goto LAB_5005a1bb;
    }
  }
  iVar10 = 0;
LAB_5005a1bb:
  local_2a = 0;
  bVar6 = true;
  if (iVar10 != 0) {
    FUN_500c33f0();
  }
  if (uVar13 != 0) {
    FUN_500fe1e0((byte *)s_node__d_50143120);
  }
  FUN_500adb20((byte *)s_BOT___s_near_node__d__path__d_DE_501430e4);
  if (*(int *)(*(int *)(*(int *)(*piVar14 + 0x45c) + 0x40c) + 0x20) == 0) {
    bVar6 = false;
  }
  while( true ) {
    if (bVar6) {
      pbVar9 = *(byte **)(*(int *)(*(int *)(*piVar14 + 0x45c) + 0x40c) + 0x20);
    }
    else {
      pbVar9 = (byte *)FUN_500630b0(this,(uint)local_28);
    }
    if (pbVar9 == (byte *)0x0) break;
    if (!bVar6) {
      local_28 = (float)((int)local_28 + 1);
    }
    bVar6 = false;
    bVar11 = (byte)uVar8;
    if (local_24 == pbVar9) {
      if (pbVar9[1] == bVar11) {
        uVar8 = (uint)*pbVar9;
        bVar7 = bVar11;
      }
      else {
        bVar7 = local_2a;
        if (*pbVar9 == bVar11) {
          uVar8 = (uint)pbVar9[1];
          bVar7 = bVar11;
        }
      }
    }
    else {
      bVar1 = *pbVar9;
      bVar7 = pbVar9[1];
      if ((bVar1 != bVar11) && (bVar7 = bVar1, pbVar9[1] != bVar11)) {
        uVar8 = (uint)local_2a;
        bVar7 = pbVar9[1];
        if (bVar1 != local_2a) {
          if (pbVar9[1] != local_2a) {
            FUN_500adb20((byte *)s_Man__I_don_t_know__Try_again__501430a4);
            return;
          }
          bVar7 = *pbVar9;
        }
      }
    }
    local_2a = bVar7;
    FUN_500adb20((byte *)s_Step__d__node__d_on_path__d_501430c4);
    local_24 = pbVar9;
  }
  return;
}

