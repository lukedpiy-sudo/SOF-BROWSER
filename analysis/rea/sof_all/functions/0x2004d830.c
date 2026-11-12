// rea decompile_all
// name: FUN_2004d830
// address: 0x2004d830
// body: available
// range: 0x2004d830-0x2004dc84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2004d830(undefined2 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined4 uStack_168;
  uint3 *puStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  char cStack_154;
  char cStack_153;
  undefined4 uStack_152;
  undefined2 uStack_14e;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  char *pcStack_13c;
  undefined4 uStack_138;
  uint3 auStack_134 [3];
  char *pcStack_128;
  undefined4 uStack_50;
  
  pcStack_128 = s_Initializing_SOCKS5_support____20136cd0;
  *(undefined2 *)(in_ECX + 0x1c) = param_1;
  auStack_134[2]._0_4_ = 0x2004d84f;
  Com_Printf();
  pcStack_128 = (char *)0x6;
  auStack_134[2]._0_4_ = 1;
  auStack_134[1]._0_4_ = 2;
  auStack_134[0]._0_4_ = 0x2004d861;
  iVar4 = Ordinal_23();
  *(int *)(in_ECX + 8) = iVar4;
  if (iVar4 == -1) {
    return 0;
  }
  auStack_134[0]._0_4_ = *(undefined4 *)(DAT_20390130 + 4);
  uStack_138 = 0x2004d87c;
  iVar4 = Ordinal_52();
  if (iVar4 == 0) {
    uStack_138 = *(undefined4 *)(DAT_20390130 + 4);
    pcStack_13c = s_Could_not_locate_SOCKS5_server___20136ca8;
    uStack_140 = 0x2004d897;
    Com_Printf();
    return 0;
  }
  if (*(short *)(iVar4 + 8) != 2) {
    uStack_138 = *(undefined4 *)(DAT_20390130 + 4);
    pcStack_13c = s_SOCKS5_server___s__not_correct_t_20136c80;
    uStack_140 = 0x2004d8c3;
    Com_Printf();
    return 0;
  }
  uStack_148 = *(undefined4 *)(in_ECX + 8);
  pcStack_13c = &stack0xfffffedc;
  uStack_138 = 4;
  uStack_140 = 0x80;
  uStack_144 = 0xffff;
  uStack_14c = 0x2004d8fb;
  Ordinal_21();
  auStack_134[0]._0_2_ = 2;
  auStack_134[1]._0_4_ = *(undefined4 *)**(undefined4 **)(iVar4 + 0xc);
  uStack_14c = 0x2004d918;
  uStack_14c = __ftol();
  uStack_152._2_1_ = 0x1e;
  uStack_152._3_1_ = 0xd9;
  uStack_14e = 0x2004;
  uVar3 = Ordinal_9();
  uStack_158 = *(undefined4 *)(in_ECX + 8);
  uStack_152._2_1_ = 0x10;
  uStack_152._3_1_ = 0;
  uStack_14e = 0;
  cStack_154 = (char)&uStack_138;
  cStack_153 = (char)((uint)&uStack_138 >> 8);
  uStack_152._0_1_ = (undefined1)((uint)&uStack_138 >> 0x10);
  uStack_152._1_1_ = (char)((uint)&uStack_138 >> 0x18);
  uStack_138 = CONCAT22(uVar3,(undefined2)uStack_138);
  uStack_15c = 0x2004d933;
  iVar4 = Ordinal_4();
  if (iVar4 == -1) {
    uStack_15c = 0x2004d93d;
    uStack_15c = FUN_2004f5b0();
    uStack_160 = *(undefined4 *)(DAT_20390130 + 4);
    puStack_164 = (uint3 *)s_Could_not_connect_to_SOCKS5_serv_20136c50;
    uStack_168 = 0x2004d951;
    Com_Printf();
    return 0;
  }
  if ((**(char **)(DAT_2039012c + 4) == '\0') && (**(char **)(DAT_20390154 + 4) == '\0')) {
    auStack_134[0]._0_2_ = 0x100;
    uStack_160 = 3;
  }
  else {
    auStack_134[0]._0_4_ = 0x2000200;
    uStack_160 = 4;
  }
  uVar5 = (undefined4)auStack_134[0];
  uStack_168 = *(undefined4 *)(in_ECX + 8);
  uStack_15c = 0;
  puStack_164 = auStack_134;
  auStack_134[0]._0_1_ = 5;
  uVar2 = (undefined4)auStack_134[0];
  auStack_134[0]._3_1_ = SUB41(uVar5,3);
  auStack_134[0]._0_2_ = (ushort)uVar2;
  auStack_134[0] = (uint3)(ushort)auStack_134[0];
  iVar4 = Ordinal_19();
  if (iVar4 == -1) {
    uVar5 = FUN_2004f5b0();
    Com_Printf(s_Could_not_initiate_communication_20136c24,uVar5);
    return 0;
  }
  iVar4 = Ordinal_16(*(undefined4 *)(in_ECX + 8),&uStack_144,0x100,0);
  if (iVar4 == -1) {
    uVar5 = FUN_2004f5b0();
    Com_Printf(s_Receive_error_on_initialization__20136bfc,uVar5);
    return 0;
  }
  if ((iVar4 == 2) && (cStack_154 == '\x05')) {
    if ((cStack_153 == '\0') || (cStack_153 == '\x02')) {
      if (cStack_153 == '\x02') {
        uVar6 = 0xffffffff;
        pcVar13 = *(char **)(DAT_2039012c + 4);
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        uVar7 = uVar6 - 1;
        uVar8 = 0xffffffff;
        pcVar13 = *(char **)(DAT_20390154 + 4);
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 != '\0');
        uVar9 = ~uVar8 - 1;
        cStack_154 = '\x01';
        cStack_153 = (char)uVar7;
        if (uVar7 != 0) {
          puVar11 = *(undefined4 **)(DAT_2039012c + 4);
          puVar12 = &uStack_152;
          for (uVar10 = uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          for (uVar10 = uVar7 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
        }
        (&cStack_153)[uVar6] = (char)uVar9;
        if (uVar9 != 0) {
          puVar11 = *(undefined4 **)(DAT_20390154 + 4);
          puVar12 = (undefined4 *)((int)&uStack_152 + uVar6);
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
        }
        iVar4 = Ordinal_19(*(undefined4 *)(in_ECX + 8),&cStack_154,~uVar8 + 2 + uVar7,0);
        if (iVar4 == -1) {
          uVar5 = FUN_2004f5b0();
          Com_Printf(s_Send_Error_on_authentication___s_20136bb4,uVar5);
          return 0;
        }
        iVar4 = Ordinal_16(*(undefined4 *)(in_ECX + 8),&puStack_164,0x100,0);
        if (iVar4 == -1) {
          uVar5 = FUN_2004f5b0();
          Com_Printf(s_Receive_Error_on_authentication__20136b8c,uVar5);
          return 0;
        }
        if ((iVar4 != 2) || (cStack_154 != '\x01')) {
          pcVar13 = s_SOCKS5_server_sent_bad_authentic_20136b30;
          goto LAB_2004dc6e;
        }
        if (cStack_153 != '\0') {
          pcVar13 = s_SOCKS5_server_authentication_fai_20136b64;
          goto LAB_2004dc6e;
        }
      }
      cStack_154 = '\x05';
      cStack_153 = '\x03';
      uStack_152._0_1_ = 0;
      uStack_152._1_1_ = '\x01';
      uStack_152._2_1_ = 0;
      uStack_152._3_1_ = 0;
      uStack_14e = 0;
      uVar3 = Ordinal_9(uStack_50);
      uStack_152._2_1_ = (undefined1)uVar3;
      uStack_152._3_1_ = (undefined1)((ushort)uVar3 >> 8);
      iVar4 = Ordinal_19(*(undefined4 *)(in_ECX + 8),&uStack_158,10,0);
      if (iVar4 == -1) {
        uVar5 = FUN_2004f5b0();
        Com_Printf(s_Send_Error_on_UDP_request___s_20136b0c,uVar5);
        return 0;
      }
      iVar4 = Ordinal_16(*(undefined4 *)(in_ECX + 8),&uStack_168,0x100,0);
      if (iVar4 == -1) {
        uVar5 = FUN_2004f5b0();
        Com_Printf(s_Receive_Error_on_UDP_request___s_20136ae4,uVar5);
        return 0;
      }
      if ((iVar4 < 2) || (cStack_154 != '\x05')) {
        pcVar13 = s_SOCKS5_server_sent_bad_UDP_reque_20136a3c;
      }
      else if (cStack_153 == '\0') {
        if (uStack_152._1_1_ == '\x01') {
          *(uint *)(in_ECX + 0x10) =
               CONCAT22(uStack_14e,CONCAT11(uStack_152._3_1_,uStack_152._2_1_));
          *(undefined2 *)(in_ECX + 0xc) = 2;
          *(undefined2 *)(in_ECX + 0xe) = (undefined2)uStack_14c;
          *(undefined4 *)(in_ECX + 0x14) = 0;
          *(undefined4 *)(in_ECX + 0x18) = 0;
          Com_Printf(s____Successful_20136a6c);
          *(undefined1 *)(in_ECX + 4) = 1;
          return 1;
        }
        pcVar13 = s_SOCKS5_server_relay_address_is_n_20136a80;
      }
      else {
        pcVar13 = s_SOCKS5_server_denied_access_to_U_20136ab4;
      }
    }
    else {
      pcVar13 = s_SOCKS5_server_denied_access_20136bdc;
    }
  }
  else {
    pcVar13 = s_SOCKS5_server_sent_bad_init_resp_20136a10;
  }
LAB_2004dc6e:
  Com_Printf(pcVar13);
  return 0;
}

