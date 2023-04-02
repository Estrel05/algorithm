package ex1.member_management.service;

import ex1.member_management.repository.MemberRepository;
import ex1.member_management.repository.MemoryMemberRepository;

public class MemberService {
    private final MemberRepository memberRepository = new MemoryMemberRepository();
}
