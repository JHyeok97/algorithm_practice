from collections import deque

def solution(maps):
    dx = [-1, 1, 0, 0]
    dy = [0, 0, -1, 1]
    n, m = len(maps), len(maps[0])
    
    visited = set([(0, 0)])  # 올바르게 초기화
    queue = deque([(0, 0, 1)])  # 시작 위치와 초기 거리
    
    while queue:
        x, y, distance = queue.popleft()
        
        # 목표 위치에 도달하면 최단 거리 반환
        if x == n - 1 and y == m - 1:
            return distance
        
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            
            # 맵 범위 확인 및 방문 여부 확인
            if 0 <= nx < n and 0 <= ny < m:
                if (nx, ny) not in visited:
                    if maps[nx][ny] == 1:  # 이동 가능한 위치 확인
                        visited.add((nx, ny))
                        queue.append((nx, ny, distance + 1))  # 거리 증가

    return -1  # 도달할 수 없을 경우 -1 반환