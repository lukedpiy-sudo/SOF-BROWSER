// rea decompile_all
// name: FUN_50048be0
// address: 0x50048be0
// body: available
// range: 0x50048be0-0x5004914a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50048be0(void *param_1)

{
  FILE *pFVar1;
  int *piVar2;
  int iVar3;
  void *this;
  int iVar4;
  int local_148;
  undefined1 local_143;
  undefined1 local_142;
  undefined1 local_141;
  int local_140;
  FILE *local_13c;
  undefined1 local_138 [12];
  undefined1 local_12c [12];
  int local_120 [7];
  char local_104 [4];
  int local_100 [4];
  int *local_f0;
  int local_e4 [3];
  undefined1 local_d8 [40];
  char local_b0 [4];
  char local_ac [12];
  char local_a0 [12];
  int local_94 [2];
  CHAR local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50113abe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_500fe2b0();
  pFVar1 = (FILE *)FUN_50107c80(local_8c,&DAT_50142a08);
  iVar4 = 0;
  local_13c = pFVar1;
  if (pFVar1 == (FILE *)0x0) {
    FUN_500adb20((byte *)s_ERROR__couldn_t_open__s__50142970);
  }
  else {
    FUN_50107954((char *)&DAT_5015916c,4,1,(int *)pFVar1);
    if (DAT_5015916c < 8) {
      FUN_500adb20((byte *)s_ERROR__wrong_version_for_NavFile_501429cc);
    }
    else {
      FUN_50107954((char *)&local_148,4,1,(int *)pFVar1);
      FUN_50049cd0(param_1,*(void **)((int)param_1 + 4),*(void **)((int)param_1 + 8));
      FUN_50049f90((void *)((int)param_1 + 0x186a24),*(undefined4 **)((int)param_1 + 0x186a28),
                   *(undefined4 **)((int)param_1 + 0x186a2c));
      piVar2 = FUN_500c3690();
      piVar2[0xae] = (int)&LAB_50044520;
      piVar2[0xad] = (int)(DAT_5015ccdc + 0.1);
      piVar2 = FUN_500c3690();
      piVar2[0xae] = (int)&LAB_500445f0;
      iVar3 = 0;
      piVar2[0xad] = (int)(DAT_5015ccdc + 0.1);
      if (0 < local_148) {
        do {
          FUN_500499c0(local_138,&local_141);
          local_4 = 0;
          FUN_500499c0(local_12c,&local_143);
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_50049a40(local_d8,&local_142);
          local_120[3] = 0;
          local_120[0] = 0;
          local_120[1] = 0;
          local_120[2] = 0;
          local_120[4] = 0;
          local_100[1] = 0;
          local_100[2] = 0;
          local_100[3] = 0;
          local_100[0] = 1;
          local_e4[0] = 0;
          local_e4[1] = 0;
          local_e4[2] = 0;
          local_120[5] = 0;
          local_4 = 2;
          FUN_50107954((char *)local_120,0xc,1,(int *)pFVar1);
          FUN_50107954(local_104,4,1,(int *)pFVar1);
          FUN_50107954((char *)local_100,4,1,(int *)pFVar1);
          FUN_50107954((char *)&local_140,4,1,(int *)pFVar1);
          if (DAT_5015916c < 9) {
            local_e4[0] = 0;
          }
          else {
            FUN_50107954((char *)local_e4,4,1,(int *)pFVar1);
          }
          local_f0 = FUN_50044410(local_120,0,local_100[0],local_e4[0]);
          FUN_50049ad0(param_1,*(int **)((int)param_1 + 8),local_138);
          local_4 = 4;
          FUN_50043ef0((int)local_d8);
          local_4 = CONCAT31(local_4._1_3_,3);
          FUN_50043ef0((int)local_12c);
          local_4 = 0xffffffff;
          FUN_50043ef0((int)local_138);
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_148);
      }
      FUN_50107954((char *)&local_148,4,1,(int *)pFVar1);
      iVar3 = 0;
      if (0 < local_148) {
        do {
          FUN_500499c0(local_138,&local_142);
          local_4 = 5;
          FUN_500499c0(local_12c,&local_143);
          local_4 = CONCAT31(local_4._1_3_,6);
          FUN_50049a40(local_d8,&local_141);
          local_120[3] = 0;
          local_120[0] = 0;
          local_120[1] = 0;
          local_120[2] = 0;
          local_120[4] = 0;
          local_100[1] = 0;
          local_100[2] = 0;
          local_100[3] = 0;
          local_100[0] = 1;
          local_e4[0] = 0;
          local_e4[1] = 0;
          local_e4[2] = 0;
          local_120[5] = 0;
          local_4 = 7;
          FUN_50107954((char *)local_120,0xc,1,(int *)pFVar1);
          FUN_50107954(local_104,4,1,(int *)pFVar1);
          FUN_50107954((char *)local_100,4,1,(int *)pFVar1);
          FUN_50107954((char *)&local_140,4,1,(int *)pFVar1);
          if (DAT_5015916c < 9) {
            local_e4[0] = 0;
          }
          else {
            FUN_50107954((char *)local_e4,4,1,(int *)pFVar1);
          }
          local_f0 = FUN_50044410(local_120,0,local_100[0],0);
          local_4 = 9;
          FUN_50043ef0((int)local_d8);
          local_4 = CONCAT31(local_4._1_3_,8);
          FUN_50043ef0((int)local_12c);
          local_4 = 0xffffffff;
          FUN_50043ef0((int)local_138);
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_148);
      }
      if (DAT_5015916c == 10) {
        FUN_50107954((char *)&local_148,4,1,(int *)pFVar1);
        local_140 = 0;
        if (0 < local_148) {
          do {
            local_94[0] = -1;
            local_94[1] = 0;
            FUN_50107954(local_b0,4,1,(int *)pFVar1);
            FUN_50107954(local_ac,0xc,1,(int *)pFVar1);
            FUN_50107954(local_a0,0xc,1,(int *)pFVar1);
            FUN_50107954((char *)local_94,4,1,(int *)pFVar1);
            if (400 < local_94[0]) {
              local_94[0] = -1;
            }
            FUN_50049d60((void *)((int)param_1 + 0x186a24),*(undefined4 **)((int)param_1 + 0x186a2c)
                         ,(undefined4 *)local_b0);
            local_140 = local_140 + 1;
          } while (local_140 < local_148);
        }
      }
      if (DAT_5015916c < 0xb) {
        *(undefined4 *)((int)param_1 + 0x10) = 0;
      }
      else {
        piVar2 = (int *)((int)param_1 + 0x10);
        FUN_50107954((char *)piVar2,4,1,(int *)pFVar1);
        if (0 < *piVar2) {
          this = (void *)((int)param_1 + 0x14);
          do {
            FUN_50044630(this,&local_13c);
            iVar4 = iVar4 + 1;
            this = (void *)((int)this + 100);
          } while (iVar4 < *piVar2);
        }
      }
      FUN_50107c0a(pFVar1);
    }
  }
  ExceptionList = local_c;
  return;
}

