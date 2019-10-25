'''
I have been studiying about this really interesting library called itertools which contains a lot of cool methods to solve problems easily.
This question is a permutation question which can be solved using itertools.
Hope everyone likes the solution
'''



class Solution(object):
    def numTilePossibilities(self, tiles):
        """
        :type tiles: str
        :rtype: int
        """

        result = set()
                
        for perm in itertools.permutations(tiles):
            for i in range(1,len(tiles)+1):
                result.add(''.join(perm[0:i]))

        return len(result)
             
