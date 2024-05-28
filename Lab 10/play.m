fileID = fopen('plot.data','r'); formatSpec = '%f';
A = fscanf(fileID,formatSpec); audiowrite('test.wav',A, 8000);