var canJump =(nums)=>{
    if(!nums || nums.length === 1) return true
    const numsLength = nums.length
    let idx = 0
    let farthest = 0
    let jumps = nums[idx]
    while(jumps){
        farthest = Math.max(farthest , idx +jumps)
        if(farthest >= numsLength - 1) break
        jumps--
        idx++
        jumps = Math.max(jumps , nums[idx])
    }
    return farthest >= numsLength - 1
}
